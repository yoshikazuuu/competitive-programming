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

ll a, b, k, x;

int solve(int x, int k) {
    if (k == 0) return x;
    else return abs(a*solve(x, k-1) + b); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> k >> x;
    cout << solve(x, k) << '\n';

    return 0;
}