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
  string s;
  cin >> s;
  ll length = s.length();
  ll doubleZero = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s.substr(i, 2) == "00") {
      doubleZero++;
      i++;
    }
  }
  cout << length - doubleZero << '\n';
}