#include <iostream>
#include <map>
#include <vector>

class Solution {
public:
    void solve(std::vector<int> nums, int n) {
        std::map<int, int> freq;

        for(int num: nums){
            freq[num]++;

            if(freq.size() >= 3){
                std::cout << "NO" << std::endl;
                return;
            }
        }

        int count1 = freq.begin()->second;
        int count2 = freq.rbegin()->second;

        if(abs(count1 - count2) <= 1){
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
};

int main() {
    int t; std::cin >> t;

    while(t--) {
        int n; std::cin >> n;
        std::vector<int> nums(n);

        for(int i = 0; i < n; i++) std::cin >> nums[i];

        Solution solution;
        solution.solve(nums, n);
    }
}
