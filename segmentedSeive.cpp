#include <cmath>
#include <iostream>
#include <vector>

std::vector<bool> seive(int n) {
    std::vector<bool> primes(n + 1, true);
    for(int i = 0; i <= n/i; i++) {
        if(primes[i]) {
            for(int j = i*i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}

std::vector<bool> segmentedSeive(long long low, long long high) {
    std::vector<bool> primes = seive(sqrtl(high));
    std::vector<bool> primesRange(high - low + 1, true);

    for(long long i = 2; i <= high/i; i++) {
        if(primes[i]) {
            for(long long j = std::max(i*i, (low + i - 1)/i*i); j <= high; j += i) {
                primesRange[j - low] = false;
            }
        }
    }
    if(low == 1) primesRange[0] = false;
    return primesRange;
}

int main() {
    int low = 1e5, high = 1e7;
    std::vector<bool> primes = seive(100);
    for(int i = 0; i < primes.size(); i++) {
        if(primes[i]) {
            std::cout << i << " ";
        }
    }
}
