#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> words(n);
    for (size_t i = 0; i < n; ++i)
        cin >> words[i];

    int idx = 0;
    int firstStrip = 0;
    while (idx < n && words[idx].size() + firstStrip <= m) {
        firstStrip += words[idx].size();
        ++idx;
    }
    cout << idx << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
