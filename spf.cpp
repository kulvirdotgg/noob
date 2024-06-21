#include <vector>

const long long SEIVE_SIZE = 100000;
std::vector<int> spf(SEIVE_SIZE + 1);

void createSeive() {
    for (int num = 1; num < SEIVE_SIZE; num++)
        spf[num] = num;

    for (int i = 2; i * i <= SEIVE_SIZE; i++) {
        if (spf[i] != i)
            continue;

        for (int j = i * i; j <= SEIVE_SIZE; j += i) {
            if (spf[j] == j)
                spf[j] = i;
        }
    }
}

int main() {
    // Write a program to print all the prime factors of number.

    int num = 1024; // user input usually

    createSeive();

    int numCopy = num; // don't mutate the OG input.
    while (numCopy > 1) {
        printf("%d is a prime factor of %d \n", spf[numCopy], num);
        numCopy /= spf[numCopy];
    }
}
