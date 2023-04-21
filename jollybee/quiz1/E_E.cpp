#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fa(i, v) for (auto i : v)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define vi(name, type, n) vector<type> name(n, 0);
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name) fa(n, name) cout << n << " ";

using namespace std;

void solve() {}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n, count = 0;
  ll sum1 = 0, sum2 = 0;
  set<ll> diff;

  cin >> n;

  vi(v1, ll, n);
  fz(i, n) {
    cin >> v1[i];
    sum1 += v1[i];
    diff.insert(sum1);
  }

  cin >> n;
  vi(v2, ll, n);
  fz(i, n) {
    cin >> v2[i];
    sum2 += v2[i];
    (diff.count(sum2) ? count++ : count += 0);
  }

  if (sum1 != sum2) {
    cout << -1 << endl;
  } else
    cout << count;

  return 0;
}