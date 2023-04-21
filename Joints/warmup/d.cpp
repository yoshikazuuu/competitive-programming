#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (ll i = a; i < b; ++i)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define vi(name, type, n) vector<type> name(n, 0);
#define vill vector<ll>
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;

int main() {
  ll N, M;
  cin >> N >> M;

  vill A(N + M), B(N + M);
  fz(i, N + M) { cin >> A[i]; }
  fz(i, N + M) { cin >> B[i]; }

  vector<pair<ll, ll> > diff(N + M);
  fz(i, N + M) { diff[i] = make_pair(A[i] - B[i], i); }

  sort(diff.begin(), diff.end());

  ll min_total_bitterness = 0;
  fz(i, N) { min_total_bitterness += A[diff[i].second]; }
  f(i, N, N + M) { min_total_bitterness += B[diff[i].second]; }

  cout << min_total_bitterness << endl;
  return 0;
}
