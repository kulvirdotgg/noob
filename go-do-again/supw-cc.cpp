#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>

class Solution {
public:
    int solve(std::vector<int> minutes, int n) {
        std::deque<int> dq;

        int sum = 0;
        for (int idx = 0; idx < n; idx++) {
            if (!dq.empty() && dq.front() <= idx - 3)
                dq.pop_front();

            while (!dq.empty() && minutes[dq.back()] > minutes[idx]) {
                dq.pop_back();
            }

            dq.push_back(idx);
            if (idx >= 2)
                sum += minutes[dq.back()];
        }

        return sum;
    }
};

int main() {
    Solution sol;
    int n;
    std::cin >> n;

    std::vector<int> minutes(n);

    for (int idx = 0; idx < n; idx++)
        std::cin >> minutes[idx];

    std::cout << sol.solve(minutes, n) << '\n';
}
