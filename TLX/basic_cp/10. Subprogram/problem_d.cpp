#include <iostream>

using namespace std;

int x, divisor = 2;

int main() {
    cin >> x;
    while (x != 1) {
        int counter = 0;
        while (x % divisor == 0) {
            counter++;
            x /= divisor;
        }
        if (counter > 1) {
            cout << divisor << "^" << counter;
        } 
        else if (counter == 1) {
            cout << divisor;
        } 
        if (x != 1 and counter != 0) {
            cout << " x ";
        }
        divisor++;
    }
}