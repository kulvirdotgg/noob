#include <iostream>
using namespace std;

#define ll long long

void solve() {
    int l, r;
    cin >> l >> r;

    bool isOdd = l & 1 || r & 1;

    int oddCount = ((r - l) >> 1) + isOdd;

    int opCount = oddCount >> 1;
    cout << opCount << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
