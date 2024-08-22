#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(2, 1e9));
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            int num;
            cin >> num;
            if (num <= vec[i][0]) {
                vec[i][1] = vec[i][0];
                vec[i][0] = num;
            } else if (vec[i][0] < num && num < vec[i][1]) {
                vec[i][1] = num;
            }
        }
    }

    long long sum = 0;
    int smi = 1e9;
    for (int i = 0; i < n; ++i) {
        sum += vec[i][1];
        smi = min(smi, vec[i][1]);
    }
    int fmi = 1e9;
    for (int i = 0; i < n; ++i)
        fmi = min(fmi, vec[i][0]);

    cout << sum + fmi - smi << '\n';
    return;
}

int main(int argc, char **argv) {
    int t;
    cin >> t;
    while (t--)
        solve();
}
