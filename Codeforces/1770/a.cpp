#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vi(name, type, n) vector<type> name(n, 0);
#define ivec(name, n) repz(i, n) cin >> name[i];
#define ovec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {
  ll n, m, total = 0;
  cin >> n >> m;
  vi(v, ll, n);
  ivec(v, n);
  vi(vm, ll, m);
  ivec(vm, m);
  sort(v.begin(), v.end());
  sort(vm.begin(), vm.end());
  ll operation = min(m, n);
  for (int i = vm.size() - 1, j = 0; j != operation; i--, j++) {
    v[j] = vm[i];
  }
  for (int i = 0; i < v.size(); i++) {
    total += v[i];
  }
  cout << total << '\n';
}

int main() {
  ll t;
  cin >> t;
  while (t--) {
    solve();
  }
}