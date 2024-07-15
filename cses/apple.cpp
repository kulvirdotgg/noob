#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    vector<int> arr = {3, 2, 7, 4, 1};

    long long minDiff = LONG_MAX;
    for (int mask = 0; mask < (1 << n); ++mask) {
        long long group1 = 0;
        long long group2 = 0;

        for (int pos = 0; pos < n; ++pos) {
            if (mask & (1 << pos)) {
                group1 += arr[pos];
            } else {
                group2 += arr[pos];
            }
        }
        minDiff = min(minDiff, abs(group1 - group2));
    }
    cout << minDiff << '\n';
    return 0;
}
