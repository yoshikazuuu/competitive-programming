#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define v(name, type, n) vector<type> name(n, 0);
#define vi(name, n) fz(i, n) cin >> name[i];
#define vo(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {
  ll n;
  string s;
  cin >> n >> s;
  fz(i, s.size()) {
    if (s[i] == 'R' and s[i + 1] == 'L') {
      cout << "0\n";
      return;
    } else if (s[i] == 'L' and s[i + 1] == 'R') {
      cout << i + 1 << '\n';
      return;
    }
  }
  cout << "-1\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n;
  cin >> n;
  while (n--) {
    solve();
  }

  return 0;
}