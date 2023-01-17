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

void solve() {}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n, l;
  cin >> n >> l;
  vi(v, ll, n);
  vin(v, n);

  sort(v.begin(), v.end());

  double diff = max(v[0], l - v[n - 1]);

  for (int i = 0; i < v.size() - 1; i++) {
    diff = max(diff, (v[i + 1] - v[i]) * 0.5);
  }
  cout << fixed << setprecision(17) << diff << '\n';

  // vout(v, n);
  return 0;
}