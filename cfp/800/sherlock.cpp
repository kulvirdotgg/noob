#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> solve(int n) {
        std::vector<int> res(n + 2, 1);

        for (int i = 2; i < n + 2; i++) {
            if (res[i] == 2)
                continue;

            for (int j = 2 * i; j < n + 2; j += i) {
                res[j] = 2;
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    int n;
    std::cin >> n;

    if (n > 2)
        std::cout << 2 << '\n';
    else
        std::cout << 1 << '\n';

    std::vector<int> res = solution.solve(n);
    for (int i = 2; i < n + 2; i++) {
        std::cout << res[i] << ' ';
    }
    std::cout << '\n';
}
