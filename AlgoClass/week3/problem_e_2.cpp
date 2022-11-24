#include<bits/stdc++.h>
using namespace std;

const int M = 105;
int use[M];
int ans[M];

int main(){
    int first;
    int n, m;
    cin >> n >> m;
    cin >> first;
    for(int i = 1; i < m; i++) {
        int temp;
        cin >> temp;
        int a = temp - first;

        if (a <= 0) a += n;  
        if((ans[first] == 0 and use[a]) or (ans[first] != 0 and ans[first] != a)) {
            cout << "-1\n";
            return 0;
        }
        use[a] = 1;
        ans[first] = a;
        first = temp;
        
    }
    int f = 1;
    for (int i = 1; i <= n; i++){
        if(ans[i] == 0){
            while(use[f]) f++;
            cout << f << " ";
            f++;
        }
        else cout << ans[i] << " ";
    }
    return 0;
}