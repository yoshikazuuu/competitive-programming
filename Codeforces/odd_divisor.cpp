#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

bool isPowerOfTwo(ll n) {
  if (n == 0)
    return false;
  return (ceil(log2(n)) == floor(log2(n)));
}

void solve() {
  ll x;
  bool div = false;
  cin >> x;
  (!isPowerOfTwo(x)) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}