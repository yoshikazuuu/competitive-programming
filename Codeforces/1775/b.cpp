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

int t, n, k;
map<int, int> subsets;

void solve() {

  cin >> n;
  subsets.clear();
  for (int i = 0; i < n; i++) {
    int or_mask = 0;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int p;
      cin >> p;
      or_mask |= (1 << (p - 1));
    }
    subsets[or_mask]++;
  }

  bool found = false;
  for (auto subset : subsets) {
    if (subset.second > 1) {
      found = true;
      break;
    }
  }

  if (found)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int main() {
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
