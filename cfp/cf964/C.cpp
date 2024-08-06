#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, s, m;
    cin >> n >> s >> m;

    vector<vector<int>> intervals;
    for (int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        intervals.push_back({l, r});
    }
    int prev = 0;
    for (int i = 0; i < n; ++i) {
        int l = intervals[i][0], r = intervals[i][1];

        if (l - prev >= s) {
            cout << "YES" << '\n';
            return;
        }
        prev = r;
    }
    if (m - prev >= s) {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}
