#include <iostream>
using namespace std;

bool isWinning(int n, int *a, long long m) {
  if (m == 0) {
    return false;
  }
  if (m == 1) {
    return true;
  }
  for (int i = 0; i < n; i++) {
    if (m >= a[i] && !isWinning(n, a, m - a[i])) {
      return true;
    }
  }
  return false;
}

int main() {
  int n, q;
  cin >> n >> q;
  int *a = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < q; i++) {
    long long m;
    cin >> m;
    if (isWinning(n, a, m)) {
      cout << "Elon" << endl;
    } else {
      cout << "Melvin" << endl;
    }
  }
  return 0;
}