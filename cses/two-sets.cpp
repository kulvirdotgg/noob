#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void solve(ll n) {
  /*
    n/2 * [2a + (n-1)d]
    for a = 1; d = 1
    n/2 * [2 + n - 1] => n/2 * (n+1)
  */
  ll sum = n * (n + 1) / 2;

  if (sum & 1) {
    cout << "NO" << '\n';
    return;
  }

  ll halfSum = sum / 2;
  vector<ll> set1, set2;
  while (n) {
    if (halfSum - n >= 0) {
      set1.push_back(n);
      halfSum -= n;
    } else {
      set2.push_back(n);
    }
    --n;
  }
  cout << "YES" << '\n';

  cout << set1.size() << '\n';
  for (auto num : set1)
    cout << num << " ";
  cout << '\n';

  cout << set2.size() << '\n';
  for (auto num : set2)
    cout << num << " ";
  cout << '\n';
}

int main() {
  ll n;
  cin >> n;

  solve(n);
}
