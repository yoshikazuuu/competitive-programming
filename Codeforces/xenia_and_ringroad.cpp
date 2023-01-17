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

    ll n, m, total = 0;
    cin >> n >> m;
    ll arr[m];

    for (int i = 0; i < m; i++) {
        cin >> arr[i];    
    }

    ll curr = 1;

    for (int i = 0; i < m; i++) {
        if (curr > arr[i]) total += n - curr + arr[i];
        else total += arr[i] - curr;
        curr = arr[i];
    }

    cout << total << '\n';

    return 0;
}