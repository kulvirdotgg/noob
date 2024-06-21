#include <iostream>
#include <string>

int modularExp(std::string num, int k) {
    int mod = 0;

    for (char strDigit : num) {
        int digit = strDigit - '0';
        mod = (mod * 10 + digit) % k;
    }

    return mod;
}

int main() {
    std::string someLargeNum = "2345434534665";
    int k = 6;

    int res = modularExp(someLargeNum, k);
    std::cout << res << std::endl;
    // printf("%s mod k is : %d", someLargeNum, k);
}
