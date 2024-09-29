#include <iostream>
using namespace std;

#define ll long long

void solve() {
    int n, k;
    cin >> n >> k;

    ll cnt = 0;
    if (k == 1) {
        cout << n << '\n';
        return;
    }
    while (n > 0) {
        cnt += n % k;
        n = n / k;
    }
    cout << cnt << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
