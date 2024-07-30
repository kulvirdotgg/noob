#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int idx = 0;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i - 1]) {
            idx = i;
        }
    }

    string res = "";
    for (int i = 0; i < idx; ++i)
        res.push_back(s[i]);

    char ch = char(s[idx] - 1);
    if (s[idx] == 'a') {
        ch = 'z';
    }
    res.push_back(ch);

    for (int i = idx; i < s.size(); ++i)
        res.push_back(s[i]);

    cout << res << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
