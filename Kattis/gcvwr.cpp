#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int g, t, n, total = 0;
    cin >> g >> t >> n;
    total = 0.9 * (g - t);
    while (n--) {
        int x;
        cin >> x;
        total -= x;
    }
    cout << total;
}
