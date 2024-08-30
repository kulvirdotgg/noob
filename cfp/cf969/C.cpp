#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    ll maxE = 0;
    vector<ll> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
        maxE = max(maxE, c[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (c[i] - maxE) {
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
