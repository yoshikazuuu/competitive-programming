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
    if (s.find('_') == -1) {
        for (int i = 0; i < s.length(); i++) {
            // cout << "bruh" << '\n';
            if (isupper(s[i]) and  i == 0) s[i] = tolower(s[i]);
            else if (isupper(s[i]) and i != 0) {
                s[i] = tolower(s[i]);
                s.insert(i, "_"); 
                i++;
            } 
        }
    } else {
        while (s.find('_') != -1) {
            int loc = s.find('_');
            s.erase(loc, 1);
            s[loc] = toupper(s[loc]);
        }
    }

    cout << s << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}