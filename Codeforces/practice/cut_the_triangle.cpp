#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  bool possible = false;
  getchar();
  ll x[4], y[4];
  for (int i = 0; i < 3; i++) {
    cin >> x[i] >> y[i];
  }
  if (x[0] == x[1] or x[0] == x[2] or x[1] == x[2]) {
    if (y[0] == y[1] or y[0] == y[2] or y[1] == y[2])
      possible = true;
  }
  (possible) ? cout << "NO\n" : cout << "YES\n";
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}