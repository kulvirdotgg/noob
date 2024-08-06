#include <iostream>
using namespace std;

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int cnt = 0;

    int suneet[2] = {a1, a2};
    int slavic[2] = {b1, b2};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int suneetWins = 0, slavicWins = 0;
            int suneet1 = suneet[i];
            int suneet2 = suneet[1 - i];
            int slavic1 = slavic[j];
            int slavic2 = slavic[1 - j];

            if (suneet1 > slavic1)
                suneetWins++;
            else if (suneet1 < slavic1)
                slavicWins++;
            if (suneet2 > slavic2)
                suneetWins++;
            else if (suneet2 < slavic2)
                slavicWins++;

            if (suneetWins > slavicWins)
                cnt++;
        }
    }
    cout << cnt << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}

