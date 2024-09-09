#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <unordered_map>

using namespace std;

void solve() {
    string s;
    cin >> s;

    unordered_map<char, int> mp;
    for (char ch : s) {
        mp[ch]++;
    }

    int odd_cnt = 0;
    char odd_char;
    string palin;
    for (auto [ch, cnt] : mp) {
        if (cnt & 1) {
            odd_cnt++;
            odd_char = ch;
            if (odd_cnt > 1) {
                cout << "NO SOLUTION" << '\n';
                return;
            }
        }

        for (int i = 0; i < cnt / 2; ++i)
            palin.push_back(ch);
    }
    string rev = palin;
    reverse(rev.begin(), rev.end());
    if (odd_cnt == 1)
        palin += odd_char;
    palin += rev;

    cout << palin << '\n';
}

int main() {
    solve();
    return 0;
}
