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
  ll x;
  cin >> x;
  ll temp = INT64_MAX;
  for (ll a = 1;; a++) {
    ll b = ceil((float)x / a);
    // cout << ceil(x / a) << "ceil\n";
    if ((a + b) * 2 <= temp) {
      temp = (a + b) * 2;
      continue;
    } else {
      // cout << a << b << " ";
      cout << temp << '\n';
      break;
    }
  }
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}