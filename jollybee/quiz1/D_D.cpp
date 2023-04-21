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

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n, div1, div2;
  cin >> n;

  for (ll i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (n / i == i) {
        div1 = i;
        div2 = i;
      } else {
        div1 = i;
        div2 = n / i;
      }
    }
  }

  cout << div1 + div2 - 2 << endl;

  return 0;
}