#include <bits/stdc++.h>
#define ll long long

#define rep(i, a, b) for (int i = a; i < b; i++)
#define repz(i, a) rep(i, 0, a)
#define reprep(i, j, a, b) rep(i, 0, a) rep(j, 0, b)

#define vec(name, type, n) vector<type> name(n);
#define invec(name, n) repz(i, n) cin >> name[i];
#define outvec(name, n) repz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {}

int main() {
  ll n;
  cin >> n;
  ll u = n;
  vector<ll> v;
  while (n--) {
    ll x;
    cin >> x;
    v.push_back(x);
  }

  ll q;
  cin >> q;
  while (q--) {
    ll type;
    cin >> type;
    if (type == 1) {
      ll index, num;
      cin >> index >> num;
      v[index - 1] = num;
    } else {
      ll index;
      cin >> index;
      cout << v[index - 1] << '\n';
    }
  }
}