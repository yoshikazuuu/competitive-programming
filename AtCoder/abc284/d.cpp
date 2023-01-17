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

bool isPrime(ll n) {
  // Check if n=1 or n=0
  if (n <= 1)
    return false;
  // Check if n=2 or n=3
  if (n == 2 || n == 3)
    return true;
  // Check whether n is divisible by 2 or 3
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  // Check from 5 to square root of n
  // Iterate i by (i+6)
  for (ll i = 5; i <= sqrt(n); i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;

  return true;
}

void solve() {
  ll input;
  cin >> input;

  for (ll p = 0;; p++) {
    ll q = input / (p * p);

    if (isPrime(p) and isPrime(q) and p * p * q == input) {
      cout << p << " " << q << endl;
      return;
    }
    // cout << p << " " << q << endl;
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