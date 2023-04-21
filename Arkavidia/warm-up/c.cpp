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

int gcd(ll a, ll b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

void solve(vector<ll> arrayAwal, ll n) {
  ll l, r;
  cin >> l >> r;
  ll maxGcd = 0;
  for (int x = l; x <= r; x++) {
    ll currentGcd = arrayAwal[0] + x;
    for (int i = 1; i < n; i++) {
      currentGcd = gcd(currentGcd, arrayAwal[i] + x);
    }
    maxGcd = max(maxGcd, currentGcd);
  }
  cout << maxGcd << '\n';
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n;
  cin >> n;
  vi(arrayAwal, ll, n);
  vin(arrayAwal, n);

  ll t;
  cin >> t;
  while (t--) {
    solve(arrayAwal, n);
  }

  return 0;
}
