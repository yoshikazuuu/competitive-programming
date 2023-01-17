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
    cin >> s;

    bool flag = true;

    for (int i = 1; i < s.length(); i++) {
        if (islower(s[i])) flag = false;
    }

    if (flag) {
        for (int i = 0; i < s.length(); i++) {
            if (islower(s[i])) cout << (char) toupper(s[i]);
            else cout << (char) tolower(s[i]);
        }
    } else cout << s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();   

    return 0;
}