#include <iostream>
using namespace std;

void solve() {
    int legs;
    cin >> legs;

    int cows = legs / 4;
    if (legs % 4) {
        ++cows;
    }
    cout << cows << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
