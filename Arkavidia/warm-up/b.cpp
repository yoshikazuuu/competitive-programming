#include <bits/stdc++.h>

#define llu unsigned long long
#define ll long long

using namespace std;

void solve() {
  string str;
  cin >> str;
  char alp[str.size()];

  bool flag = true;
  for (int i = str.size() - 1; i >= 0; i--) {
    alp[i] = tolower(str[i]);
    int angka = (int)alp[i];
    if ((angka < 97 || angka > 122) && (angka < 48 || angka > 57)) {
      flag = false;
    }
  }
  if (!flag) {
    cout << "Emor tidak beruntung :(\n";
    return;
  } else {
    for (int i = str.size() - 1; i >= 0; i--) {
      alp[i] = tolower(str[i]);
      cout << alp[i];
    }
    cout << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}