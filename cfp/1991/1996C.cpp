#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> pre1(n + 1, vector<int>(26, 0));
    vector<vector<int>> pre2(n + 1, vector<int>(26, 0));

    for (int idx = 1; idx <= n; ++idx) {
        char ch;
        cin >> ch;
        ++pre1[idx][ch - 'a'];

        for (int ch = 0; ch < 26; ++ch)
            pre1[idx][ch] += pre1[idx - 1][ch];
    }
    for (int idx = 1; idx <= n; ++idx) {
        char ch;
        cin >> ch;
        ++pre2[idx][ch - 'a'];

        for (int ch = 0; ch < 26; ++ch)
            pre2[idx][ch] += pre2[idx - 1][ch];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int diff = 0;
        for (int ch = 0; ch < 26; ++ch) {
            int d1 = pre1[r][ch] - pre1[l - 1][ch];
            int d2 = pre2[r][ch] - pre2[l - 1][ch];
            diff += abs(d1 - d2);
        }
        cout << diff / 2 << '\n';
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
