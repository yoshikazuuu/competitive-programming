#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, k;
int arr[105][105];

void dfs(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= k || arr[i][j] == 0) return;
    arr[i][j] = 0;
    dfs(i-1, j);
    dfs(i+1, j);
    dfs(i, j-1);
    dfs(i, j+1);
}

int main() {
    cin >> n >> k;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < k; j++) {
            arr[i][j] = s[j] - '0';
        }
    }
    int kapal = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (arr[i][j] == 1) {
                dfs(i, j);
                kapal++;
            }
        }
    }
    cout << kapal << "\n";
    return 0;
}
