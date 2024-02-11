#include <iostream>

class Solution {
public:
    int solve(std::string s, int n) {
        int res = 0;

        int inRow = 0;
        int empty = 0;

        int curr = 0;
        for(char ch: s) {
            if(ch == '.') {
                inRow++;
                empty++;
            }
            else {
                inRow = 0;
            }

            if(inRow >= 3) {
                return 2;
            }
        }

        return empty;
    }
};

int main() {
    Solution solution;

    int t; std::cin>>t;

    while(t--) {
        int n; std::cin >> n;

        std::string s; std::cin >> s;
        std::cout << solution.solve(s, n) << '\n';
    }
}
