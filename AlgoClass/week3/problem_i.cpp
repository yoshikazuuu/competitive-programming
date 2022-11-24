#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

int n, counter = 1;

void solve() {
    ull x, a = 0, b = 1, c; 
    cin >> x;
    for (int i = 0; i <= x; i++) {
        c = a + b;
        a = b;
        b = c;
    }    
    cout << "Scenario #" << counter++ << ":\n" << c << "\n\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    while (n--){
        solve();
    }
    return 0;
}