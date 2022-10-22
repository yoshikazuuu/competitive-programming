#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int n = 1;
    for (int i = 0; i < 4; i++) {
        if (a[i] == b[i]) {
            n *= 1;
        } else {
            n *= 2;
        }
    }
    cout << n;
}
