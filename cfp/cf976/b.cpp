#include <cmath>
#include <iostream>
using namespace std;

#define ll long long

void solve() {
    ll k;
    cin >> k;

    ll l = 0, r = 1e18;
    while (l < r) {
        ll mid = l + (r - l) / 2;

        ll midSqrt = sqrt(mid);
        if (mid - midSqrt >= k) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << l << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
