#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        float x, y;
        cin >> x >> y;
        cout << setprecision(4) << fixed << 60 * (x - 1) / y << ' ' << setprecision(4) << fixed << 60 * x / y << ' ' << setprecision(4) << fixed << 60 * (x + 1) / y << "\n" ;
    }
}