#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

int counter = 1;

ull factorial(int n) {
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void solve() {
    string s;
    int alp[26] = {0};
    cin >> s;
    int length = s.size();
    ull a = factorial(length);
    for (int i = 0; i < length; i++) {
        alp[s[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (alp[i] > 1) {
            a /= factorial(alp[i]);
        }
    }
    cout << "Data set " << counter++ << ": " << a << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    unsigned int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}