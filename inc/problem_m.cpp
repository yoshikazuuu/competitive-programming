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
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, flag = true;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int hap[n];
    for (int i = 0; i < n; i++) hap[i] = 0;

    int counter = 0, rep = 0;
    for (int i = 0; i < n; i += 2) {
        // cout << abs(arr[i] - arr[i+2]) << " ";
        if (abs(arr[i] - arr[i+2]) == 2 or abs(arr[i] - arr[i+2]) == 0) {
            counter += 2;
            continue;
        }
        else {
            hap[rep] = counter; 
            counter = 0;
            flag = false;
            rep++;
        }
    }

    sort(hap, hap + n, greater<int>());

    for (int i = 0; i < n; i++) cout << hap[i] << ' ';

    // counter = hap[0];

    // if (n == 2) counter = 2;
    // else if (counter == 0 and n >= 3) counter = 3;
    // else if ((counter+1) * 2 > n) counter = n;
    // else counter = ((counter+1) * 2);

    // if (flag) cout << counter << '\n';
    // else cout << counter+1 << '\n';
    
    return 0;
}