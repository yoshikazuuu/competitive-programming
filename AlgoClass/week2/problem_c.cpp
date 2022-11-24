#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <ctype.h>
#include <algorithm>
using namespace std;

int t;

void checker(){
    int n, m;
    cin >> n >> m;
    for (int j = 0; j < t; j++) {
        int x, y;
        cin >> x >> y;
        if (x == n or y == m) cout << "divisa\n";
        else if (x > n and y > m) cout << "NE\n";
        else if (x < n and y > m) cout << "NO\n";
        else if (x > n and y < m) cout << "SE\n";
        else if (x < n and y < m) cout << "SO\n";
    }
}

int main() {
    cin >> t;
    
    while (t) {
        checker();
        cin >> t;
    }
}
