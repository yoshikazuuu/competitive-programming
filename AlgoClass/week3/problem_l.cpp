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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, req;
    vi m;
    cin >> n >> req;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m.push_back(x);
    }

    sort(m.begin(), m.end(), greater<int>());

    for (int i = m[0]; 0 < i; i--) {
        int temp = 0;
        int max;
        for (int j = 0; j < n; j++) {
            if (i < m[j]) temp += i - m[j];
            max = i;
        }
        if (-1 * temp == req) cout << max << "\n";
    }

    return 0;
}