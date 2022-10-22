#include <iostream>
#include <algorithm>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <ctype.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    while (n--) {
        int m, length = 0;
        int arr[101];
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        sort(arr, arr + m);
        for (int i = 0; i < m; i++) {
            if (i) length += abs(arr[i] - arr[i - 1]);
        }
        cout << length * 2 << '\n';
    }
}
