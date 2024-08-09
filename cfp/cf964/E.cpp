#include <iostream>
#include <vector>
using namespace std;

const long large = 2e5 + 1;
vector<long long> opSum(large, 0);

void solve() {
    int l, r;
    cin >> l >> r;

    cout << opSum[r] - opSum[l - 1] + (opSum[l] - opSum[l - 1]) << '\n';
}

int main() {
    for (int i = 0; i < large; ++i) {
        long cnt = 0, num = i;
        while (num) {
            num /= 3;
            ++cnt;
        }
        opSum[i] = cnt + opSum[i - 1];
    }

    int t;
    cin >> t;
    while (t--)
        solve();
}
