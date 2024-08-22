#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        if (num % k)
            v[i] = {i + 1, num % k};
        else
            v[i] = {i + 1, k};
    }
    stable_sort(v.begin(), v.end(), [&](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });

    for (int i = 0; i < n; ++i) {
        cout << v[i].first << " ";
    }
    cout << '\n';
    return;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
