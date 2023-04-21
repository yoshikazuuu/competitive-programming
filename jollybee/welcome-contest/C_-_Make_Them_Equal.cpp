#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, start, n) for (int i = start; i < n; i++)
#define fz(i, n) f(i, 0, n)
#define ffz(i, j, n, m) f(i, 0, n) f(j, 0, m)

#define vi(name, type, n) vector<type> name(n, 0);
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {
  ll n, rep = 0, start = 2;
  char c;
  string s;
  vi(ans, ll, 0);

  cin >> n >> c >> s;

  bool equal = true;
  fz(i, n) if (s[i] != c) equal = false;
  if (equal) {
    cout << 0 << '\n';
  } else {
    f(i, n / 2, n) if (s[i] == c) ans.push_back(i);
    if (!ans.empty())
      cout << 1 << '\n' << ans[0] + 1 << '\n';
    else
      cout << 2 << '\n' << n - 1 << ' ' << n << '\n';
  }
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