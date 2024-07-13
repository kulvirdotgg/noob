#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

void solve(string &s) {
    unordered_map<char, int> mp;
    for (char ch : s) {
        ++mp[ch];
    }

    string palindrome = "";
    for (auto [ch, count] : mp) {
        if (count & 1) {
            continue;
        }
        palindrome += string(count / 2, ch);
        mp.erase(ch);
    }

    char singleChar;
    if (mp.size() > 1) {
        cout << "NOT POSSIBLE" << '\n';
    } else if (mp.size() == 1) {
        cout << "here" << endl;
        unordered_map<char, int>::iterator it;
        it = mp.begin();

        singleChar = it->first;
        palindrome += string(it->second / 2, singleChar);
    }
    string rev = palindrome;
    reverse(rev.begin(), rev.end());

    palindrome += singleChar;
    palindrome += rev;

    cout << palindrome << '\n';
}

int main() {
    string s = "AAAACACBA";
    solve(s);
}
