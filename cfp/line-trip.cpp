#include <iostream>

class Solution {
public:
    int solve(int* arr, int n, int x) {
        int res = arr[0];
        for(int i = 1; i < n; i++) {
            res = std::max(res, arr[i] - arr[i-1]);
        }

        res = std::max(res, 2 * (x - arr[n-1]));
        return res;
    }
};

int main() {
    Solution solution;

    int t; std::cin>>t;

    while(t--) {
        int n; std::cin>>n;
        int x; std::cin>>x;

        int arr[n];
        for(int i = 0; i < n; i++) std::cin>>arr[i];

        std::cout << solution.solve(arr, n, x) << '\n';
    }
}
