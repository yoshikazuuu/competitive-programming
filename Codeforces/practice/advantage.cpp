#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {
  ll t;
  cin >> t;
  vector<ll> arr;
  vector<ll> arr2;
  repz(i, t) {
    ll x;
    cin >> x;
    arr.push_back(x);
    arr2.push_back(x);
  }
  sort(arr.begin(), arr.end());
  ll max = arr[t - 1];
  ll secMax = arr[t - 2];

  repz(i, t) {
    if (i != 0)
      putchar(' ');
    if (arr2[i] != max)
      cout << '-' << max - arr2[i];
    else
      cout << max - secMax;
  }
  putchar('\n');
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}