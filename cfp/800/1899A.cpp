#include<iostream>

class Solution {
public:
    void solve(int n) {
        if(n % 3) {
            std::cout << "First" << '\n';
        }
        else std::cout << "Second" << '\n';
    }
};

int main() {
    int t; std::cin >> t;

    Solution s;
    while(t--) {
        int n; std::cin >> n;
        s.solve(n);
    }
}
