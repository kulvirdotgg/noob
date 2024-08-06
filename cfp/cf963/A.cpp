#include <algorithm>
#include <iostream>
#include <unordered_map>

using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    unordered_map<char, int> mp;
    for (char ch : s) {
        if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D') {
            ++mp[ch];
        }
    }
    int correct = 0;
    for (auto [ch, cnt] : mp) {
        correct += min(cnt, n);
    }
    cout << correct << '\n';

    return;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
