package main

import (
	"fmt"
	"math/rand"
	"runtime"
	"sync"
	"time"
)

func main() {
	start := time.Now()
	done := make(chan bool)
	defer close(done)

	randomNumStream := getRandomNum(done)

	// This Approach with slow bottleneck
	// Every calculation is concurrent but not prallel
	// spin other goroutines to do calculations for same task
	// for primeNum := range takePrime(done, primes, 10) {
	// 	fmt.Println(primeNum)
	// }

	// The parallel approach
	cpus := runtime.NumCPU()
	workers := make([]<-chan int, cpus)
	// fan out multiple worker function
	for cpu := 0; cpu < cpus; cpu++ {
		workers[cpu] = primeCheck(done, randomNumStream)
	}

	// fan in
	// op is the channel that will collect values from all fanned out goroutines
	// and we only need 10 outuputs, hence use take function for 10 ops
	op := fanIn(done, workers...)
	for prime := range takePrime(done, op, 10) {
		fmt.Println(prime)
	}
	fmt.Println("Time it took to find 10 primes", time.Since(start).Seconds())
}

func fanIn(done chan bool, channels ...<-chan int) <-chan int {
	var wg sync.WaitGroup

	outStream := make(chan int)
	transfer := func(c <-chan int) {
		defer wg.Done()

		for num := range c {
			select {
			case <-done:
				return
			case outStream <- num:
			}
		}
	}

	for _, ch := range channels {
		wg.Add(1)
		go transfer(ch)
	}

	go func() {
		wg.Wait()
		close(outStream)
	}()

	return outStream
}

func takePrime(done <-chan bool, primes <-chan int, numPrimes int) <-chan int {
	taken := make(chan int)
	go func() {
		defer close(taken)

		for num := 0; num < numPrimes; num++ {
			select {
			case <-done:
				return
			case taken <- <-primes:
			}
		}
	}()
	return taken
}

func primeCheck(done chan bool, stream <-chan int) <-chan int {
	isPrime := func(random int) bool {
		for idx := random - 1; idx > 1; idx-- {
			if random%idx == 0 {
				return false
			}
		}
		return true
	}

	primes := make(chan int)
	go func() {
		defer close(primes)

		for {
			select {
			case <-done:
				return
			case num := <-stream:
				if isPrime(num) {
					primes <- num
				}
			}
		}
	}()
	return primes
}

func getRandomNum(done <-chan bool) <-chan int {
	stream := make(chan int)
	go func() {
		defer close(stream)
		for {
			select {
			case <-done:
				return
			case stream <- rand.Intn(100000000):
			}
		}
	}()
	return stream
}

// Send data from multiple go routines to same channel
// Sol: make a goroutine to wait until all other goroutines are done sending data
// Close the channel when Done.
func second() {
	channel := make(chan int, 10)
	var wg sync.WaitGroup

	wg.Add(2)
	go func() {
		defer wg.Done()

		for j := 0; j < 10; j++ {
			send := j
			channel <- send
		}
		fmt.Println("-----1st Go Routine is ended here-----")
	}()

	go func() {
		defer wg.Done()

		for j := 0; j < 10; j++ {
			send := j
			channel <- send
		}
		fmt.Println("-----2nd Go Routine is ended here-----")
	}()

	go func() {
		wg.Wait()
		defer close(channel)
	}()

	mp := make(map[int]int)
	for kv := range channel {
		mp[kv]++
	}
	fmt.Printf("The map is:\n %v\n", mp)
}
