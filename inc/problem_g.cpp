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

ll startPoints;

void solve() {
    char opt1, opt2;
    string option1, option2;
    ll num1, num2, temp1, temp2;

    cin >> opt1 >> num1 >> opt2 >> num2;
    
    if (opt1 == '+') temp1 = startPoints + num1;
    else if (opt1 == 'x') temp1 = startPoints * num1;

    if (opt2 == '+') temp2 = startPoints + num2;
    else if (opt2 == 'x') temp2 = startPoints * num2;

    // cout << temp1 << " " << temp2 << '\n';
    if (temp1 > temp2) startPoints = temp1;
    else startPoints = temp2;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n >> startPoints;
    while (n--) {
        solve();
    }

    cout << startPoints << '\n';

    return 0;
}