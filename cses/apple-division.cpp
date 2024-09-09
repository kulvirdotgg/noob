#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

#define ll long long

using namespace std;

void subset(vector<int> apples, int idx, ll &min_diff, ll one, ll two) {
    if (idx == apples.size()) {
        min_diff = min(min_diff, abs(one - two));
        return;
    }
    subset(apples, idx + 1, min_diff, one + apples[idx], two);
    subset(apples, idx + 1, min_diff, one, two + apples[idx]);
}

int main() {
    int n;
    cin >> n;
    vector<int> apples(n);
    for (int i = 0; i < n; ++i) {
        cin >> apples[i];
    }

    ll min_diff = 1e9;
    subset(apples, 0, min_diff, 0, 0);
    cout << min_diff << '\n';
}
