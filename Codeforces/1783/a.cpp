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
  ll n, sum = 0;
  cin >> n;
  vi(v, ll, n);
  vin(v, n);

  fz(i, v.size() - 1) {
    if (v[i] == sum) {
      v.push_back(v[i]);
      v.erase(v.begin() + i);
      i--;
    }
    sum += v[i];
  }
  if (sum == v.back())
    cout << "NO\n";
  else {
    cout << "YES\n";
    vout(v, v.size());
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