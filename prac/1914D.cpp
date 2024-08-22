#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> maxThree(vector<int> a) {
    vector<int> res(3, -1);
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] >= a[res[0]]) {
            res[2] = res[1];
            res[1] = res[0];
            res[0] = i;
        } else if (a[i] >= a[res[1]]) {
            res[2] = res[1];
            res[1] = i;
        } else if (a[i] >= a[res[2]]) {
            res[2] = i;
        }
    }
    return res;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    long long maxFrens = 0;
    for (int ai : maxThree(a)) {
        for (int bi : maxThree(b)) {
            for (int ci : maxThree(c)) {
                if (ai != bi && ai != ci && bi != ci) {
                    long long sum = a[ai] + b[bi] + c[ci];
                    maxFrens = max(sum, maxFrens);
                }
            }
        }
    }
    cout << maxFrens << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
