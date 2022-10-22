#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t, rs, rh;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> rs >> rh;
        int n1, n2;
        cin >> n1;
        int countera = 0, counterb = 0;
        for (int j = 0; j < n1; j++) {
            double x, y, length;
            cin >> x >> y;
            length = sqrt(abs(x)*abs(x) + abs(y)*abs(y));
            if (length <= (double) rh + rs) {
                countera++;
            }
        }
        cin >> n2;
        for (int j = 0; j < n2; j++) {
            double x, y, length;
            cin >> x >> y;
            length = sqrt(abs(x)*abs(x) + abs(y)*abs(y));
            if (length <= (double) rh + rs) {
                counterb++;
            }
        }
        while (countera > 0 and counterb > 0) {
            countera--;
            counterb--;
        }
        cout << "Case #" << i+1 << ": " << countera << ' ' << counterb << '\n';
    }
}