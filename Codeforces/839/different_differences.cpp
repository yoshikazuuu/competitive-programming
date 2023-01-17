#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {
  ll k, n;
  cin >> k >> n;
  for (int i = 1; i <= k - 1; i++) {
    cout << i << " ";
  }
  cout << n << '\n';
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}