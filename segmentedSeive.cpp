#include <cstdio>
#include <vector>

const long long SEIVE_SIZE= 1000000;

std::vector<bool> primes(SEIVE_SIZE, true);

void createSeive() {
    for(int num = 2; num * num <= SEIVE_SIZE; num++) {
        if(primes[num]) {
            for(int j = num*num; j <= SEIVE_SIZE; j += num) {
                primes[j] = false;
            }
        }
    }
}

std::vector<int> getPrimesFromSeive(int num) {
    std::vector<int> primeList;

    for(int i = 2; i <= num; i++) {
        if(primes[i]) {
            primeList.push_back(i);
        }
    }
    return primeList;
}

std::vector<int> segmentedSeive(long long low, long long high) {
    createSeive();
    std::vector<int> smallPrimes = getPrimesFromSeive(sqrt(high));

    std::vector<bool> largePrimes(high - low + 1, true); 

    for(int prime: smallPrimes) {
        int firstMultiple = (low + prime) / prime * prime;

        for(int num = std::max(prime * prime, firstMultiple); num <= high; num += prime) {
            // printf("the num getting marked is : %d \n", num);
            largePrimes[num - low] = false;
        }
    }

    std::vector<int> primes;
    for(int num = 0; num <= high - low; num++) {
        if(largePrimes[num]) {
            primes.push_back(low + num);
        }
    }
    return primes;
}

int main() {
    int low = 110;
    int high = 130;

    std::vector<int> primes = segmentedSeive(low, high);
    for(int prime: primes) {
        printf("%d \t", prime);
    }
    printf("\n");
}
