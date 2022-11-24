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

string s;

void solve() {
    unsigned long long total = 0;
    int counter = 0, rep = 0;
    while (s.size() != 1) {
        int i = s.size();
        int auth = s[i-1] - '0';
        if (!auth) {
            s.pop_back();
            rep++;
            // cout << s << '\n';
        } else {
            for (int j = s.size(); j > 0; j--) {
                if (s[j-1] == '1') {
                    s[j-1] = '0';
                    if (j-1 == 0) s.insert(0, "1");
                }
                else {
                    s[j-1] = '1';
                    break;
                }
            }
            rep++;
            // cout << s << '\n';
        }
    }
    cout << rep << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;   
    solve();

    return 0;
}