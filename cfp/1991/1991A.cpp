#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int mx = 0;
    for (int idx = 0; idx < n; ++idx) {
        int num;
        cin >> num;

        if (num > mx && (idx & 1) == 0) {
            mx = num;
        }
    }
    cout << mx << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
