#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define MOD 1000000007
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

void subArray(int arr[], int n)
{
    int total = 0;
    // Pick starting point
    for (int i=0; i <n; i++)
    {
        // Pick ending point
        for (int j=i; j<n; j++)
        {
            int temp[j - i + 1];
            // cout << j - i + 1 << endl;
            // Print subarray between current starting
            // and ending points
            int bruh = 0;
            for (int k=i; k<=j; k++) {
                temp[bruh] = arr[k];
                bruh++;
            }

            int sum = temp[0];
            for (int m = 1; m < j - i + 1; m++) {
                sum = (sum & temp[m]);
            }

            total += sum * (j - i + 1) % MOD;

            // for (int k=i; k<=j; k++) {
            //     cout << arr[k] << " ";
            // }
            // cout << endl;
        }
        
    }
    cout << total << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int size_arr = n;
    int v[size_arr];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    subArray(v, size_arr);

    return 0;
}