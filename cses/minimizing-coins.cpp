#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n + 1);
    for (int i = 0; i < n; ++i)
        cin >> coins[i];

    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;
    for (int sum = 1; sum <= x; ++sum) {
        for (int coin : coins) {
            if (coin <= sum)
                dp[sum] = min(dp[sum], dp[sum - coin] + 1);
        }
    }

    if (dp[x] == 1e9) {
        cout << -1 << '\n';
        return;
    }
    cout << dp[x] << '\n';
}

int main() {
    solve();
    return 0;
}
