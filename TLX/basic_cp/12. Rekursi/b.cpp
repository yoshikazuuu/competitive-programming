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

int factorial(int x){
    if (x == 1) return 1;
    else if (x % 2 == 0) return (x / 2) * factorial(x - 1);
    else return x * factorial(x - 1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll x;
    cin >> x;
    cout << factorial(x) << '\n';

    return 0;
}