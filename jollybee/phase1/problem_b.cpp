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
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

ull sum(ull x, ull y, ull m) {
    uint64_t ans = x + y;
		if (ans < x || ans >= m)
			ans -= m;
		return ans;
}

ull multi(ull x, ull y, ull m) {
    if (y <= 1)
        return y ? x : 0;
    uint64_t ans = multi(x, y >> 1, m);
    ans = sum(ans, ans, m);
    if (y & 1)
        ans = sum(ans, x, m);
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ull x, y, m = 0;
    cin >> x >> y;

    cout << to_string(multi(x, y, m)) << '\n';

    return 0;
}