#include <bits/stdc++.h>
#define ll unsigned long long
#define vi vector<ll>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)
#define inmat(name, n, p) reprep(i, j, n, p) cin >> name[i][j];
#define outmat(name, n, p)                                                     \
  repz(i, n) {                                                                 \
    repz(j, p) cout << name[i][j] << " ";                                      \
    cout << "\n";                                                              \
  }
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";
#define mat(name, n, m) vector<vector<int>> name(n, vector<int>(m));

using namespace std;

void solve() {
  ll n, k;
  cin >> n >> k;
  vi v(n);
  invec(v, n);

  vi arr;
  arr.push_back(k);
  while (k) {
    k /= 2;
    arr.push_back(k);
  }
  sort(v.begin(), v.end(), greater<ll>());

  ll ans;
  ll found = 0;

  long long i = v.size() - 1, j = arr.size() - 1;

  while (i >= 0 and j >= 0) {
    if (v[i] >= arr[j] and found) {
      if (ans > (j + v[i] - arr[j]))
        ans = j + v[i] - arr[j];
      j--;
    } else if (v[i] >= arr[j]) {
      ans = j + v[i] - arr[j];
      found = 1;
      j--;
    } else
      i--;
  }

  cout << ans;
  cout << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t = 1;
  // cin >> t;
  for (int i = 1; i <= t; i++)
    solve();

  return 0;
}
