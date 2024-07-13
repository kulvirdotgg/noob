#include <algorithm>
#include <iostream>

void solve(int a, int b) {
    if (std::max(a, b) <= std::min(a, b) * 2) {
        if ((a + b) % 3 == 0) {
            std::cout << "YES" << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    } else {
        std::cout << "NO" << '\n';
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int a, b;
        std::cin >> a >> b;
        solve(a, b);
    }
}
