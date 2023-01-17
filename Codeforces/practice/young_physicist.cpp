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

int n, totalx = 0, totaly = 0, totalz = 0;

void solve() {
    int x, y, z;
    cin >> x >> y >> z;
    totalx += x;
    totaly += y;
    totalz += z;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while (n--){
        solve();
    }

    if (totalx == 0 and totaly == 0 and totalz == 0) cout << "YES";
    else cout << "NO";   

    return 0;
}