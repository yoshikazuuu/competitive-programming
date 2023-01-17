#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define vi(name, type, n) vector<type> name(n);
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;

void fillPrefixSum(vector<ll> arr, ll n, vector<ll> prefixSum) {
  prefixSum[0] = arr[0];
  for (int i = 1; i < n; i++)
    prefixSum[i] = prefixSum[i - 1] + arr[i];
}

void solve() {
  ll n, m;
  cin >> n >> m;
  vi(v, ll, n);
  vin(v, n);

  vi(prefixSum, ll, n);
  prefixSum[0] = v[0];
  for (int i = 1; i < n; i++)
    prefixSum[i] = prefixSum[i - 1] + v[i];

  auto it = minmax_element(prefixSum.begin(), prefixSum.end());
  int min_idx = distance(prefixSum.begin(), it.first);
  int max_idx = distance(prefixSum.begin(), it.second);

  if (*min_element(prefixSum.begin(), prefixSum.end()) == prefixSum[m - 1]) {
    cout << "0\n";
  } else {
    cout << distance(prefixSum.begin(), it.first) << '\n';
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