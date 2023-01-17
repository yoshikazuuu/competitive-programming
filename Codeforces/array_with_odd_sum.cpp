#include <bits/stdc++.h>
using namespace std;

#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, b, c) for (int a = b; a < c; a++)
#define FOR0(a, c) FOR(a, 0, c)
#define FORL(a, b, c) for (int a = b; a < c; a++)
#define FORR(a, b, c) for (int a = b; a > c; a--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;
#define F first
#define S second
#define B first
#define E second
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve() {
  ll total = 0;
  ll t;
  cin >> t;
  vi arr;
  FOR0(i, t) {
    ll x;
    cin >> x;
    arr.PB(x);
    total += x;
  }
  FOR0(i, t){FOR0(j, t){
      if ((arr[i] + arr[j]) % 2 == 1 and arr[i] != arr[j]){cout << "YES\n";
  return;
}
}
}
(total % 2 == 1) ? cout << "YES\n" : cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n;
  cin >> n;
  while (n--) {
    solve();
  }

  return 0;
}