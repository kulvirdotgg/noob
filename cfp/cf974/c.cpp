#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> wealth;
    ll total = 0, maxW = 0;
    for (int i = 1; i <= n; ++i) {
        ll gold;
        cin >> gold;

        wealth.emplace_back(gold);
        total += gold;
        maxW = max(maxW, gold);
    }

    if (n <= 2) {
        cout << -1 << '\n';
        return;
    }

    double halfAvg = total / ((double)n * 2);

    sort(wealth.begin(), wealth.end());
    ll unhappy =
        lower_bound(wealth.begin(), wealth.end(), halfAvg) - wealth.begin();

    // already half is unhappy
    if (unhappy > n / 2) {
        cout << 0 << '\n';
        return;
    }

    ll wN = wealth[ceil(n / 2)];
    ll totalShouldBe = (wN * n * 2) + 1;
    cout << (totalShouldBe - total) << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
