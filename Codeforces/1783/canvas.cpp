#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, n, a[55], sum;
  cin >> t;
  while (t--) {
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> a[i];
    for (int i = 1; i < n; i++) {
      sum = 0;
      for (int j = i + 1; j <= n; j++)
        sum += a[j];
      if (sum == a[i]) {
        cout << "NO" << endl;
        goto brk;
      }
    }
    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
      cout << a[i] << " ";
    cout << endl;
  brk:;
  }
  return 0;
}