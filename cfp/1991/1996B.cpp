#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<vector<char>> matrix(n, vector<char>(n));
    for (int row = 0; row < n; ++row)
        for (int col = 0; col < n; ++col)
            cin >> matrix[row][col];

    for (int row = 0; row < n; row += k) {
        for (int col = 0; col < n; col += k) {
            cout << matrix[row][col];
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
