#include <bits/stdc++.h>
#include <unordered_set>
#define ll long long
#define INF 1000000000000000003
#define MOD 1e9 + 7

#define f(i, a, b) for (int i = a; i < b; i++)
#define fz(i, a) f(i, 0, a)
#define ffz(i, j, a, b) f(i, 0, a) f(j, 0, b)

#define vi(name, type, n) vector<type> name(n, 0);
#define vin(name, n) fz(i, n) cin >> name[i];
#define vout(name, n) fz(i, n) cout << name[i] << " ";

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

using namespace std;

void solve() {}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);

  ll n;
  cin >> n;
  vi(v, ll, n);
  vi(v1, ll, 0);
  vi(v2, ll, 0);

  fz(i, n) {
    ll x;
    cin >> x;
    if (i % 2 == 0) {
      v1.push_back(x);
    } else {
      v2.push_back(x);
    }
    v[i] = x;
  }

  ll maxVal = *max_element(v.begin(), v.end());
  ll maxVal1 = *max_element(v1.begin(), v1.end());
  ll maxVal2 = *max_element(v2.begin(), v2.end());

  vi(count, ll, maxVal + 1);
  vi(count1, ll, maxVal1 + 1);
  vi(count2, ll, maxVal2 + 1);

  fz(i, n) count[v[i]]++;
  fz(i, n / 2) count1[v1[i]]++;
  fz(i, n / 2) count2[v2[i]]++;

  sort(count.begin(), count.end(), greater<int>());
  sort(count1.begin(), count1.end(), greater<int>());
  sort(count2.begin(), count2.end(), greater<int>());

  if (count1[0] + count2[0] == n and count[0] == n)
    cout << n / 2 << endl;
  else if (count1[0] == n / 2 and count2[0] == n / 2)
    cout << 0 << endl;
  else
    cout << n - (count1[0] + count2[0]) << endl;

  return 0;
}