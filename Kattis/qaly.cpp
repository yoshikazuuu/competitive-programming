#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double x, y;
        cin >> x >> y;
        total += x * y;
    }
    cout << setprecision(3) << fixed << total;
}