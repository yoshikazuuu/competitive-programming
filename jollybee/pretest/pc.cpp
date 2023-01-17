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

int main() {
  ll n;
  cin >> n;
  while (n--) {
    ll t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++) {
      ll bruh;
      cin >> bruh;
      v.push_back(bruh);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < t; i++) {
      cout << v[i];
      if (i == t - 1)
        continue;
      else
        cout << " ";
    }
    putchar('\n');
  }
}