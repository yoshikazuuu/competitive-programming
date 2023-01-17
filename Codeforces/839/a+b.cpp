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
  string s;
  bool before = true;
  cin >> s;
  string a, b;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '+' and before) {
      a += s[i];
      continue;
    } else if (s[i] == '+') {
      before = false;
      continue;
    }
    b += s[i];
  }

  cout << stoi(a) + stoi(b) << '\n';
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}