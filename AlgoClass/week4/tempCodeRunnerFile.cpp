#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {}

int main() {
  ll x;
  cin >> x;
  if (x == 2) {
    cout << "YES\n";
    return 0;
  } else if (x % 2 == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}