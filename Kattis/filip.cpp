#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int reverseOrder(int x) {
    int reversedNumber = 0, currDigit;
    while (x != 0) {
        currDigit = x % 10;
        reversedNumber = reversedNumber * 10 + currDigit;
        x /= 10;
    }
    return reversedNumber;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (reverseOrder(a) > reverseOrder(b)) {
        cout << reverseOrder(a);
    } else {
        cout << reverseOrder(b);
    }
}
