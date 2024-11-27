#include <iostream>
#include <vector>
using namespace std;

int MAX = 1e5 + 1;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> pre(MAX);
    for (size_t i = 0; i < n; ++i) {
        cin >> a[i];
        ++pre[a[i]];
    }

    vector<int> dp(MAX, 0);
    dp[1] = pre[1];
    for (size_t i = 2; i < MAX; ++i) {
        dp[i] = max(dp[i - 1], int(i * pre[i] + dp[i - 2]));
    }
    cout << dp[MAX - 1] << '\n';
}

int main() { solve(); }
