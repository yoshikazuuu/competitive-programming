#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    double w, h;
    cin >> n >> w >> h;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;
        if (sqrt(pow(w, 2) + pow(h, 2)) >= l) {
            cout << "DA\n";
        } else {
            cout << "NE\n";
        }
    }
}