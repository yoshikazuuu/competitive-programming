#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define v(name, type, n) vector<type> name(n, 0);
#define vi(name, n) fz(i, n) cin >> name[i];
#define vo(name, n) fz(i, n) cout << name[i] << " ";

using namespace std;

void solve() {
  ll n;
  cin >> n;
  if (n == 3) {
    cout << "NO\n";
    return;
  } else if (n % 2 == 0) {
    cout << "YES\n";
    fz(i, n / 2) cout << "1 -1 ";
    putchar('\n');
  } else {
    cout << "YES\n";
    f(i, 1, 5000) {
      f(j, 1, 5000) {
        if (((n / 2) * i) - ((n / 2 - 1) * j) == 0) {
          fz(k, n / 2) cout << i << " -" << j << ' ';
          cout << i << '\n';
          return;
        }
      }
    }
  }
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