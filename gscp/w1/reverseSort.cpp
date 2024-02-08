#include <iostream>
#include <vector>

class Solution{
public:
    int reverseSortCost(std::vector<int>& nums) {
        int n  = nums.size();
        int cost = 0;

        for(int i = 0; i < n - 1; i++) {
            int idx = std::min_element(nums.begin() + i, nums.end()) - nums.begin();
            std::reverse(nums.begin() + i, nums.begin() + idx + 1);

            cost += idx - i + 1;
        }

        return cost;
    }

    void constructArray(std::vector<int>& nums, int n, int cost, int min) {
        if(n==1) {
            nums.push_back(min);
            return;
        }

        if(cost > n-2 || cost <= n*(n-1)/2) {
            nums.insert(nums.begin(), min);
            constructArray(nums, n, cost - 1, min + 1);
        }
    }

    std::vector<int> getArrayWithCost(int n,int cost) {
        std::vector<int> res;

        if(cost < n-1 || cost > n*(n+1)/2) return res; 
        
        constructArray(res, n, cost, 1);

        return res;
    }
};

int main() {
    Solution s;

    return 0;
}
