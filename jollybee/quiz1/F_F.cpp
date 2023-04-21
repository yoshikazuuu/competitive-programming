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

void solve() {
  ll n, possible = true;
  cin >> n;
  vi(v, ll, n);
  vin(v, n);
  sort(v.begin(), v.end());

  ll find = v.front() * v.back();

  vector<ll> comp;
  for (ll i = 1; i * i <= find; i++) {
    if (find % i == 0) {
      comp.push_back(i);
      if (find / i != i)
        comp.push_back(find / i);
    }
  }
  sort(comp.begin(), comp.end());
  comp.pop_back();
  comp.erase(comp.begin());

  // cout << find << endl;
  // vout(v, v.size());
  // cout << endl;
  // vout(comp, comp.size());
  // cout << endl;

  if (v == comp) {
    cout << find << endl;
  } else
    cout << "-1" << endl;
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