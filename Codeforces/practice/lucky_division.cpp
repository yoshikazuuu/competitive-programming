#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
// #define mod 1e9 + 7
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
    ll t,n;
    cin>>n;
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0){
        cout<<"YES";
    }
    else{
        bool flag = true;
        ll mod = 0,div = 0;
        while(n > 0){
            mod = n % 10;
            n /= 10;
            if(mod == 4 || mod == 7){
                flag = true;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();   

    return 0;
}