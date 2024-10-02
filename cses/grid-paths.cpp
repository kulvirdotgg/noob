#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i)
        cin >> grid[i];

    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int row = 0; row < n; ++row) {
        if (grid[row][0] == '*')
            break;
        dp[row][0] = 1;
    }
    for (int col = 0; col < n; ++col) {
        if (grid[0][col] == '*')
            break;
        dp[0][col] = 1;
    }

    for (int row = 1; row < n; ++row) {
        for (int col = 1; col < n; ++col) {
            if (grid[row][col] == '*')
                continue;
            dp[row][col] = (dp[row][col - 1] + dp[row - 1][col]) % MOD;
        }
    }
    cout << dp[n - 1][n - 1] << '\n';
}

int main() {
    solve();
    return 0;
}
