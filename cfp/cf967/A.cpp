#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
        cin >> a[i];

    unordered_map<int, int> mp;
    int maxCount = 0;
    for (int i = 0; i < n; ++i) {
        int num = a[i];
        mp[num]++;

        maxCount = max(maxCount, mp[num]);
    }
    cout << n - maxCount << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
