#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

#define mat(name, n, m) vector<vector<int>> name(n, vector<int>(m));
#define inmat(name, n, p) reprep(i, j, n, p) cin >> name[i][j];
#define outmat(name, n, p)                                                     \
  repz(i, n) {                                                                 \
    repz(j, p) cout << name[i][j] << " ";                                      \
    cout << "\n";                                                              \
  }

using namespace std;

void solve() {
  ll t;
  cin >> t;
  vector<int> arr;
  for (int i = 0; i < t; i++) {
    ll bruh;
    cin >> bruh;
    arr.push_back(bruh);
  }
  //   for (int i = 0; i < t; i++) {
  //     cout << arr[i];
  //   }
  //   putchar('\n');

  ll first_tower = arr[0];
  sort(arr.begin(), arr.end());
  //   cout << arr[t - 2] << ' ' << arr[t - 3] << ' ' << arr[0] << "\n";

  if (first_tower < arr[t - 1]) {
    cout << arr[t - 1] + arr[t - 2] / 2;
  } else
    cout << first_tower;
}

int main() {
  ll n;
  while (n--) {
    solve();
  }
  return 0;
}
