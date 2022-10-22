#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, d;
    double s;
    cin >> a >> b >> c >> d;
    s = (a+b+c+d)/2.0;
    cout << setprecision(15) << fixed << sqrt((s-a)*(s-b)*(s-c)*(s-d));
}