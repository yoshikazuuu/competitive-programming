#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    
    ll t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ll n;
        cin >> n;
        ll count[n];
        ll arr[n+1];
        
        for(int j=0;j<=n;j++)
        {
            count[j] = 0;
            arr[j] = 0;
        }
        
        ll num;
        ll total = 0;
        
        for(int j=1;j<=n;j++)
        {
            cin >> num;
            if(count[num-1] == 0)
            {
                count[num-1] = 1;
                total++;
            }
            arr[j] = j + total;
            //0 0 0 0 1 1
        }
        
        ll l, r, maks = 0;
        for(int j=1;j<=n;j++)
        {
            for(int k=0;k<=j;k++)
            {
                if(arr[j] - arr[k] - 1 >= maks) l = k, r = j, maks = arr[j] - arr[k] - 1;
            }
        }
        
        cout << l << " " << r << "\n";
    }
    
    
    return 0;
}