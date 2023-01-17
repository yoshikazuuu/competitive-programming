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
  ll t;
  string s;
  cin >> t;
  string jadi;
  string sub;
  cin >> s;
  for (int i = 0; i < s.size() - t; i++) {
    bitset<4> a(s.substr(i, t));
    bitset<4> b(s.substr(i + 1, t));
    if (i == 0)
      jadi = (string)(a | b);
    else
      jadi = (jadi | a);
  }
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}