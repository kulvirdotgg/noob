#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> numIdx;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numIdx.push_back({num, i + 1});
    }

    sort(numIdx.begin(), numIdx.end());

    int lastIdx = -1, rounds = 1;
    for (auto [_, idx] : numIdx) {
        if (idx < lastIdx) {
            ++rounds;
        }
        lastIdx = idx;
    }
    cout << rounds << '\n';
}

int main() {
    solve();
    return 0;
}
