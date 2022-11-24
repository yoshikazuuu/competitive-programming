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

void solve() {
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, p, x, flag = true;
    cin >> n >> p >> x;

    int rep[n], pAfter[n];
    for (int i = 0; i < n; i++) cin >> rep[i];

    while (1) {
        int temp = p;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                pAfter[i] = temp + (rep[i]);
            } else pAfter[i] = pAfter[i-1] + (rep[i]);
        }
        p = pAfter[n-1];
        
        for (int j = 0; j < n; j++) {
            // sort(pAfter, pAfter + n, );
            // cout << pAfter[j] << " ";
            if (pAfter[j] < x) {
                cout << pAfter[j] << "\n";
                return 0;
            }
        }
    }

    return 0;
}