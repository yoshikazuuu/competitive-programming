#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

int main() {
  ll x, y, dem = 6;
  cin >> x >> y;
  ll m = max(x, y);
  switch (m - 1) {
  case 6:
    cout << "1/6\n";
    break;
  case 5:
    cout << "1/6\n";
    break;
  case 4:
    cout << "1/3\n";
    break;
  case 3:
    cout << "1/2\n";
    break;
  case 2:
    cout << "2/3\n";
    break;
  case 1:
    cout << "5/6\n";
    break;
  case 0:
    cout << "1/1\n";
    break;
  }
}