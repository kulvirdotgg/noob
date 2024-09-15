#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    map<ll, int> mp;

    for (int i = 0; i < n; ++i) {
        ll arr, dep;
        cin >> arr >> dep;

        mp[arr] = 1;
        mp[dep] = -1;
    }

    ll present = 0, maxCust = 0;
    for (auto [time, cust] : mp) {
        present += cust;
        maxCust = max(maxCust, present);
    }
    cout << maxCust << '\n';
}

int main() {
    solve();
    return 0;
}
