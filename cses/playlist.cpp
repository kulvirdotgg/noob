#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> songs(n + 1);
    for (int i = 1; i <= n; ++i) {
        int song;
        cin >> song;
        songs[i] = song;
    }

    map<int, int> lastPlay;
    int lastInPlay = 1;
    int maxPlaylist = 0;
    for (int i = 1; i <= n; ++i) {
        int song = songs[i];
        if (lastPlay.find(song) != lastPlay.end() &&
            lastPlay[song] >= lastInPlay) {
            lastInPlay = lastPlay[song] + 1;
        }
        maxPlaylist = max(maxPlaylist, i - lastInPlay + 1);
        lastPlay[song] = i;
    }
    cout << maxPlaylist << '\n';
}

int main() {
    solve();
    return 0;
}
