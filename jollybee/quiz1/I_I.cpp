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
  string s[9];

  fz(i, 9) { cin >> s[i]; }
  fz(i, 9) {
    fz(j, 9) {
      if (s[i][j] == '1')
        cout << '2';
      else
        cout << s[i][j];
    }
    cout << '\n';
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