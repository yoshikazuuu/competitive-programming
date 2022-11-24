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

    int n, Lc, Lp, Ls, Rc, Rp, Rs;
    cin >> n >> Lc >> Rc >> Lp >> Rp >> Ls >> Rs;

    int sum = Lc + Lp + Ls;

    int counter = 0;

    for (int i = Lc; i <= Rc; i++) {
        for (int j = Lp; j <= Rp; j++) {
            for (int k = Ls; k <= Rs; k++) {
                if (n == i + j + k && i <= Rp && j <= Rp && k <= Rs) counter++;
            }
        }
    }
    
    cout << counter << '\n';

    return 0;
}