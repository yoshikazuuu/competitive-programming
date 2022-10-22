#include <iostream>
using namespace std;

int main() {
    double x;
    cin >> x;
    printf("%.10f\n%.10f\n", (100-x) / x + 1, 100 / (100 - x));
}