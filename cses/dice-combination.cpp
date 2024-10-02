#include <iostream>
#include <vector>
using namespace std;

#define ll long long
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int dice = 1; dice <= 6; ++dice) {
            if (i - dice >= 0)
                dp[i] = (dp[i] + dp[i - dice]) % MOD;
        }
    }
    cout << dp[n] << '\n';
}

int main() {
    solve();
    return 0;
}
