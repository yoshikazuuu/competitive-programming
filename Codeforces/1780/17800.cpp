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
  ll t;
  cin >> t;
  vi(v, ll, t);
  vin(v, t);

  for (ll i = 0; i < v.size() - 2; i++) {
    for (ll j = i + 1; j < v.size() - 1; j++) {
      for (ll k = j + 1; k < v.size(); k++) {
        if ((v[i] + v[j] + v[k]) % 2 != 0) {
          cout << "YES" << '\n' << i + 1 << ' ' << j + 1 << ' ' << k + 1;
          return;
        }
        // cout  << v[i] << ' ' << v[j] << ' ' << v[k];
      }
    }
  }

  cout << "NO";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n;
  cin >> n;
  while (n--) {
    solve();
    cout << '\n';
  }

  return 0;
}