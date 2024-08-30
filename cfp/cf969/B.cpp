#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    int maxE = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        maxE = max(maxE, a[i]);
    }

    vector<int> maxes;
    while (m--) {
        char ch;
        int l, r;
        cin >> ch >> l >> r;

        if (l <= maxE && r >= maxE) {
            if (ch == '+')
                maxE++;
            else
                maxE--;
        }
        maxes.push_back(maxE);
    }

    for (int num : maxes) {
        cout << num << " ";
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
