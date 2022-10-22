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
    string s;
    int counter[4] = {0};
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'h') counter[0]++;
        else if (s[i] == 'e' and counter[0] > 0) counter[1]++;
        else if (s[i] == 'l' and counter[1] > 0) counter[2]++;
        else if (s[i] == 'o' and counter[2] > 1) counter[3]++;
    }

    if (counter[3] > 0) cout << "YES";
    else cout << "NO";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();   

    return 0;
}