#include <bits/stdc++.h>
#include <unordered_set>

#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define v(name, type, n) vector<type> name(n, 0);
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;
ll n, m, banyak = 0;
unordered_set<ll> bruh;

void solve() {
  ll u, v, test = 0;
  cin >> u >> v;
  ll temp = bruh.size();
  bruh.insert(u);
  bruh.insert(v);
  if (bruh.size() - temp == 2)
    banyak++;
}

int main() {
  cin >> n >> m;
  if (m == 0) {
    cout << n << '\n';
    return 0;
  }
  while (m--) {
    solve();
  }
  cout << banyak << '\n';
}