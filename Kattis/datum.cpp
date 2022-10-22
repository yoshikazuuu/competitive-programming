#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;

int lastMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string day[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
    int d, m;
    int start = 0;
    cin >> d >> m;
    start += d;
    for (int i = 0; i < m; i++) {
        start += lastMonth[i];
    }
    if (start > 7) {
        cout << day[start % 7];
    } else {
        cout << day[start];
    }
}
