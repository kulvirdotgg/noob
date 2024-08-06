#include <iostream>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    string out;

    int n = s.size();
    int m = t.size();
    int left = 0;
    for (int i = 0; i < n; ++i) {
        if (left < m && s[i] == t[left]) {
            out.push_back(s[i]);
            ++left;
        } else if (left < m && s[i] == '?') {
            out.push_back(t[left]);
            ++left;
        } else if (s[i] == '?') {
            out.push_back('a');
        } else {
            out.push_back(s[i]);
        }
    }
    if (left == t.size()) {
        cout << "YES" << '\n';
        cout << out << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}
