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

    for (int i = 0; s[i] != '\0'; i++) {
        if ((char) tolower(s[i]) == 'a' or (char) tolower(s[i]) == 'i' or (char) tolower(s[i]) == 'u' or (char) tolower(s[i]) == 'e' or (char) tolower(s[i]) == 'o' or (char) tolower(s[i]) == 'y') {
            continue;
        } else {
            cout << '.';
            cout << (char) tolower(s[i]);
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}