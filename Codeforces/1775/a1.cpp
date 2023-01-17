#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define vi(name, type, n) vector<type> name(n, 0);
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {
  string s;
  cin >> s;
  f(i, 1, s.length() - 1) {
    f(j, 1, s.length() - 1) {
      string a = s.substr(0, i);
      string b = s.substr(i, s.length() - j - 1);
      string c = s.substr(s.length() - j, j);
      if (((a <= b and b >= c) or (a >= b and b <= c)) and
          (a.length() + b.length() + c.length() == s.length())) {
        cout << a << ' ' << b << ' ' << c << '\n';
        return;
      }
    }
  }
  cout << ": (\n";
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