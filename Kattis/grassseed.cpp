#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int l;
    double c, total = 0;
    cin >> c >> l;
    while (l--) {
        double x, y;
        cin >> x >> y;
        total += x * y;
    }
    cout << setprecision(7) << fixed << total * c;
}