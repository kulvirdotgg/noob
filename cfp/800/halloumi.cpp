#include <algorithm>
#include <iostream>

class Solution {
public:
    void solve(int *arr, int n, int k) {
        if (k > 1 || std::is_sorted(arr, arr + n)) {
            std::cout << "YES" << '\n';
        } else
            std::cout << "NO" << '\n';
    }
};

int main() {
    Solution solution;

    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        int k;
        std::cin >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            std::cin >> arr[i];

        solution.solve(arr, n, k);
    }
}
