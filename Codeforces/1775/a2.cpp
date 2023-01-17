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
    if (s[i] == 'b' and s[0] == 'a' and s[s.length()] == 'a') {
      cout << s[0] << ' ';
      for (int j = i; j != s.length() - 2; j++)
        cout << s[j];
      cout << ' ' << s[s.length()] << '\n';
      return;
    }
  }
  f(i, 1, s.length() - 1) {
    if (s[i] == 'a') {
      cout << s.substr(0, i) << ' ' << s[i] << ' ';
      for (int j = i + 1; s[j] != '\0'; j++)
        cout << s[j];
      cout << '\n';
      return;
    }
  }
  f(i, 1, s.length() - 1) {
    string a = s.substr(0, i);
    string b = s.substr(i, s.length() - i - 1);
    string c = s.substr(s.length() - i, i);
    if (((a <= b and b >= c) or (a >= b and b <= c)) and
        (a.length() + b.length() + c.length() == s.length())) {
      cout << a << ' ' << b << ' ' << c << '\n';
      return;
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