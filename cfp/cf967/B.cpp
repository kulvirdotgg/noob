#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n, -1);

    if ((n & 1) == 0) {
        cout << -1 << '\n';
        return;
    }

    int l = 0, r = n - 1;
    for (int i = 1; i <= n; ++i) {
        if (i & 1) {
            a[l] = i;
            l++;
        } else {
            a[r] = i;
            r--;
        }
    }
    for (int num : a)
        cout << num << " ";
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
