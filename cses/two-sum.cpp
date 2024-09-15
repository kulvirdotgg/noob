#include <iostream>
#include <map>

#define ll long long

using namespace std;

void solve() {
    ll n, x;
    cin >> n >> x;

    map<ll, int> mp;
    for (int i = 0; i < n; ++i) {
        ll num;
        cin >> num;

        if (mp.find(x - num) != mp.end()) {
            cout << i + 1 << " " << mp[x - num] << '\n';
            return;
        }

        mp[num] = i + 1;
    }
    cout << "IMPOSSIBLE" << '\n';
}

int main() {
    solve();
    return 0;
}
