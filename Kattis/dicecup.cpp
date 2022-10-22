#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;
    if (n > m) {
        n += 1;
        for (int i = m + 1; i <= n; i++) {
            cout << i << "\n";
        }
    } else {
        m += 1;
        for (int i = n + 1; i <= m; i++) {
            cout << i << "\n";
        }
    }
}
