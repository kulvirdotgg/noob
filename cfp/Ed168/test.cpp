#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    if (n < 3) {
        cout << "this is hitting" << endl;
        cout << "NO" << endl;
        return;
    }

    vector<int> arr(n, 0);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }
    int smSum = 0;
    int lgSum = 0;
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        lgSum += arr[r];
        r--;
        smSum += arr[l];
        l++;
    }
    if (smSum >= lgSum) {
        cout << "smsum : " << smSum << "lgsum : " << lgSum << '\n';
        cout << "yes";
    } else {
        cout << "no";
    }
    cout << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--)
        solve();
}
