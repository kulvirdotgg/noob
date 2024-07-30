#include <iostream>
#include <vector>
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> grid(2);
    cin >> grid[0];
    cin >> grid[1];

    if (n < 3) {
        cout << 0 << endl;
        return;
    }

    ll cnt = 0;
    for (int row = 0; row < 2; ++row) {
        for (int i = 1; i < n - 1; ++i) {
            if (row == 0 && (grid[1][i - 1] == 'x' && grid[1][i + 1] == 'x' &&
                             grid[0][i] == '.' && grid[0][i - 1] == '.' &&
                             grid[0][i + 1] == '.')) {
                ++cnt;
            }
            if (row == 1 && (grid[0][i - 1] == 'x' && grid[0][i + 1] == 'x' &&
                             grid[1][i] == '.' && grid[1][i - 1] == '.' &&
                             grid[1][i + 1] == '.')) {
                ++cnt;
            }
        }
    }

    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
