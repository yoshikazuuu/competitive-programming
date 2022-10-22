#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include <ctype.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int counter = 0;
        for (int j = 0; j < 3; j++) {
            int x;
            cin >> x;
            if (x > 20) counter++;
        }
        if (!counter) cout << "Case " << i << ": " << "good\n";
        else cout << "Case " << i << ": " << "bad\n";
     }
}