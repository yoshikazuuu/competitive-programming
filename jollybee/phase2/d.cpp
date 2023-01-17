#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

int maxv(vector<ll> v) {
  auto max = v[0];
  for (int i = 1; i < v.size(); i++)
    if (v[i] > max)
      max = v[i];

  return max;
}

void solve() {
  ll t;
  cin >> t;
  vector<ll> v;
  for (int i = 0; i < t; i++) {
    ll x;
    cin >> x;
    v.push_back(x);
  }
  // reverse(v.begin(), v.end());
  ll temp;
  ll start = 0;
  // cout << m << " ";
  bool reach = false;
  for (int i = 0; i < v.size(); i++) {
    ll m = maxv(v);
    if (i == 0) {
      if (v[i] == m) {
        reach = true;
      }
      continue;
    }

    // cout << v[i - 1] << ' ' << v[i] << '\n';
    if (reach == false) {
      if (v[i - 1] <= v[i]) {
        if (v[i] == m) {
          reach = true;
        }
        continue;
      } else {
        start = i;
        reach = false;
      }
    } else {
      if (v[i - 1] >= v[i]) {
        continue;
      } else {
        start = i;
        reach = false;
      }
    }
  }
  // outvec(v, v.size());
  // putchar('\n');
  cout << t - v.size() << '\n';
}

int main() {
  ll n;
  cin >> n;
  while (n--) {
    solve();
  }
}