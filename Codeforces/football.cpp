#include <bits/stdc++.h>
#include <unordered_map>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

int main() {
  ll n;
  int occur[2] = {0};
  cin >> n;
  string a = "";
  string b = "";
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (i == 0) {
      a = s;
      occur[0]++;
    } else if (s != a) {
      b = s;
    }

    if (s == a) {
      occur[0]++;
    } else {
      occur[1]++;
    }
  }
  (occur[0] > occur[1]) ? cout << a << '\n' : cout << b << '\n';
}
