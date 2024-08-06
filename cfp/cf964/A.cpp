#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    while (n) {
        int d = n % 10;
        sum += d;
        n /= 10;
    }
    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}
