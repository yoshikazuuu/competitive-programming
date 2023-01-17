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
  bitset<4> a(string("1000"));
  bitset<4> b(string("0001"));
  bitset<4> c(string("0001"));
  bitset<4> d(string("0010"));
  cout << (1000 | b | c | d);

  // cout << strcmp("111", "110");
}