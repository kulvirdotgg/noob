#include <iostream>
#include <vector>


int minCost(std::vector<int>& heights, int n, int k) {
    std::vector<int> dp(n, -1);
    dp[0] = 0;

    for(int i = 1; i <= n; i++) {
        int minCost = INT_MAX;

        for(int j = 1; j <= k; j++) {
            if(i - j >= 0) {
                int jump = abs(heights[i] - heights[i - j]) + dp[i - j];
                minCost = std::min(minCost, jump);
            }
        }
        dp[i] = minCost;
    }

    return dp[n-1];
}

int main() {
    int n; std::cin >> n;
    int k; std::cin >> k;
    std::vector<int> heights(n);
    for(int i = 0; i < n; i++) {
        std::cin >> heights[i];
    }

    std::cout << minCost(heights, n, k) << std::endl;

    return 0;
}
