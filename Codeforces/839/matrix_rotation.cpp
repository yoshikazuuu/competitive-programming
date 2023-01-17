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
  ll a, b, c, d;
  bool can = false;
  cin >> a >> b >> c >> d;
  for (int i = 0; i < 4; i++) {
    if (a < b and a < c and c < d and b < d) {
      can = true;
      break;
    } else {
      ll temp = a;
      a = c;
      c = d;
      d = b;
      b = temp;
    }
    // cout << a << b << '\n' << c << d << '\n';
  }
  (can) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}