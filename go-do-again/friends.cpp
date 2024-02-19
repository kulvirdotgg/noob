#include <iostream>
#include <vector>

class Solution {
public:
    void printVec(std::vector<int> nums) {
        for(int num: nums) std::cout << num << " ";
        std::cout << '\n';
    }

    int memFunc(std::vector<int>& dp, int n) {
        if(n < 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;

        if(dp[n] != -1) return dp[n];

        int res = memFunc(dp, n - 1) + (n - 1) * memFunc(dp, n-2);

        return dp[n] = res;
    }

    int solMem(int n) {
        std::vector<int> dp(n + 1, -1);
        memFunc(dp, n);

        printVec(dp);

        return dp[n];
    }

    int sol(int n) {
        std::vector<int> dp(n + 1, 0);
        dp[1] = 1; dp[2] = 2;

        for(int frns = 3; frns <= n; frns++) {
            dp[frns] = dp[frns-1] + (frns - 1) * dp[frns - 2];
        }

        printVec(dp);

        return dp[n];
    }
};

int main() {
    Solution sol;

    int res = sol.solMem(5);
    std::cout << "some friends can form groups : " << res << '\n';

    res = sol.sol(5);
    std::cout << "some friends can form groups : " << res << '\n';
    return 0;
}
