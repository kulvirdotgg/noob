#include <iostream>
#include <set>

using namespace std;

#define ll long long

void solve() {
    int n, m;
    cin >> n >> m;

    multiset<ll> ms;
    for (int i = 0; i < n; ++i) {
        ll num;
        cin >> num;
        ms.insert(num);
    }

    for (int i = 0; i < m; ++i) {
        ll cust;
        cin >> cust;

        auto price = ms.upper_bound(cust);

        if (price == ms.begin()) {
            cout << -1 << " ";
            continue;
        }
        price = --price;
        cout << *price << " ";
        ms.erase(price);
    }
    cout << '\n';
}

int main() {
    int t;
    solve();
}
