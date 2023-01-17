#include <bits/stdc++.h>
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

void solve() {}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n;
  cin >> n;
  v(a, ll, n);
  v(b, ll, n);
  vin(a, n);
  vin(b, n);

  int i = 0;
  for (auto t : b) {
    while (i < n && a[i] != t)
      ++i;
    if (i == n) {
      cout << "NO\n";
      exit(0);
    }
  }
  cout << "YES\n";

  return 0;
}