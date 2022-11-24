
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

int main(){
    string expansion[] = {"Accepted", "Wrong Answer", "Time Limit Exceeded", "Memory Limit Exceeded", "Run Time Error","Compile Error", "Presentation Error", "Output Limit"};
    string abbreviation[] = {"AC", "WA", "TLE", "MLE", "RTE", "CE", "PE", "OT"};
    
    string abbr;

    cin >> abbr;

    for (int i = 0; i < 8; i++) {
        if (abbr == abbreviation[i]) {
            cout << expansion[i] << "\n";
            return 0;
        }
    }
    cout << "Verdict doesn't exist\n";
    
    return 0;
}