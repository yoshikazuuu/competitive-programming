#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

int n, gap;

void solve() {}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> gap;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int counter = 0, max = -1;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        if (abs(arr[i] - arr[j]) <= gap and abs(arr[i] - arr[k]) <= gap and
            abs(arr[j] - arr[k]) <= gap) {
          counter++;

          int temp = arr[i] + arr[j] + arr[k];
          if (temp > max)
            max = temp;
        }
      }
    }
  }

  if (counter == 0)
    cout << -1 << '\n';
  else
    cout << counter << ' ' << max << '\n';

  return 0;
}