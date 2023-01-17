#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    int x[6];

    cin >> a >> b >> c;
    if (!(1 <= a || a <= 10 || 1 <= b || b <= 10 || 1 <= c || c <= 10)) {
        return 0;
    }

    x[0] = a + b * c;
    x[1] = a * (b + c);
    x[2] = a * b * c;
    x[3] = (a + b) * c;
    x[4] = a * (b * c);
    x[5] = a + b + c;

    cout << *max_element(x, x + 6) << "\n";
    
}