#include <bits/stdc++.h>
#include <unordered_map>
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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    string perm;
    cin >> n >> m;
    vi l;

    for (int i = 1; i <= n; i++) {
        perm += to_string(i); 
    }

    for (int i = 0; i < m; i++) {
        cin >> l[i];
    }

    do {
        string cardinals;
        vi temp;
        unordered_map<int,int> s;
        int card = 0;
        for (int i = 0; i < n; i++) {
            temp[i] = l[i+1] + (perm[i] - '0');
            if (temp[i] > n) temp[i] -= n;
        } 

        for (int j = 0; j < n; j++) {
            s[temp[j]]++;
        }          

        cout << s.size() << '\n';

    } while (next_permutation(perm.begin(), perm.end()));


    return 0;
}