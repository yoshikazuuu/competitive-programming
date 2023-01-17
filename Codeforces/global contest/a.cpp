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
    int x;
    cin >> x;
    int arr[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    vi distinct;

    sort(arr, arr + x);
 
    for (int i=0; i<x; i++) {
       while (i < x-1 && arr[i] == arr[i+1]) i++;
       distinct.insert(distinct.begin(), arr[i]);
    }

    int max = -1 * INT_MAX;
    int loc1 = 0, loc2 = 0;

    for (int i = 0; i < distinct.size(); i++) {
        for (int j = i + 1; j < distinct.size(); j++) {
            int temp = distinct[i] - distinct[j] - (j-1-i);
            if (temp > max) max = distinct[i] - distinct[j] - (j-1-i), loc1 = distinct[j], loc2 = distinct[i];
        }
    }
    cout << loc1 << " " << loc2 << '\n';


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    while (n--) {
        solve();
    }

    return 0;
}