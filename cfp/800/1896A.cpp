#include <iostream>
#include <vector>

class Solution {
public:
    void solve(std::vector<int>& nums) {
        if(nums[0] == 1) {
            std::cout << "YES" << std::endl;
            return;
        }
        else {
            std::cout << "NO" << std::endl;
            return;
        }
    }
};

int main() {
    int t; std::cin >> t;

    while(t--) {
        int n; std::cin >> n;
        std::vector<int> nums(n);
        for(int i = 0; i < n; i++) std::cin >> nums[i];

        Solution s;
        s.solve(nums);
    }
}
