#include <iostream>

void solve() {
    long long bitCnt[32];
    for (int b = 0; b < 32; ++b) {
        bitCnt[b] = 0;
    }
    int n;
    std::cin >> n;

    long long pairs = 0;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;

        int msb;
        for (int b = 30; b >= 0; --b) {
            if ((1 << b) & num) {
                msb = b;
                break;
            }
        }
        pairs += bitCnt[msb];
        ++bitCnt[msb];
    }
    std::cout << pairs << '\n';
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }
}
