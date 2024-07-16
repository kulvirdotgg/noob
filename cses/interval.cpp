#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> movies = {{3, 5}, {4, 9}, {5, 8}, {10, 12}};
    sort(movies.begin(), movies.end(), [&](pair<int, int> a, pair<int, int> b) {
        return a.second < b.second;
    });

    int watched = 0;
    int prevEnd = 0;
    for (auto [start, end] : movies) {
        if (prevEnd <= start) {
            ++watched;
            prevEnd = end;
        }
    }
    cout << watched << endl;
}
