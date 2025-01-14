#include <iostream>
using namespace std;

#define ll long long

const int MOD = 1e9 + 7;

ll expRec(int base, int pow) {
  if (pow == 0)
    return 1;

  // inter = base ^ pow/2
  // finalRes = inter ^ 2
  // same thing
  ll inter = expRec(base, pow / 2);

  if (pow & 1) {
    // a^2n+1 = (a^n * a^n) * a
    return (inter * inter) % MOD * base;
  } else {
    return (inter * inter) % MOD;
  }
}

ll expIter(int base, int pow) {
  ll exp = 1;
  while (pow > 0) {
    if (pow & 1) {
      exp = exp * base % MOD;
    }
    base = base * base % MOD;
    pow >>= 1;
  }
  return exp;
}

int main() {
  int base, pow;
  cin >> base >> pow;

  ll modPow = expIter(base, pow);
  cout << modPow << '\n';
  return 0;
}
