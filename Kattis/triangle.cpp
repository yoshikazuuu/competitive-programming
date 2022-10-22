#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << setprecision(4) << fixed << 0.5 * a * b;
}