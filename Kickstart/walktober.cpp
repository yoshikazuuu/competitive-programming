#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x;
    int kurang[102] = {0};
    cin >> x;

    for (int y = 0; y < x; y++) {
        int m, n, p;
        int a[1001][1001] = {0};
        cin >> m >> n >> p;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        } 

        for (int i = 0; i < n; i++) {
            int max = INT_MIN;
            for(int j = 0; j < m; j++) {
                if(a[j][i] > max) {
                    max = a[j][i];
                }
            }
            
            if (a[p-1][i] < max) {
                kurang[y] += max - a[p-1][i];
            }
        }
        
    }

    for (int i = 1; i <= x; i++) {
        cout << "Case #" << i << ": " << kurang[i-1] << '\n';
    }

    return 0;
}