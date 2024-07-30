#include <iostream>
#include <stack>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    stack<int> st;
    int cost = 0;
    for (int idx = 1; idx <= n; ++idx) {
        if ((st.empty() && s[idx - 1] == '_') || s[idx - 1] == '(') {
            st.push(idx);
        } else {
            cost += (idx - st.top());
            st.pop();
        }
    }
    cout << cost << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}
