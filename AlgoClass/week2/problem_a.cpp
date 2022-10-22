#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
#include  <ctype.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x, y;
        cin >> x >> y;
        if (x > y) cout << '>' << '\n';
        else if (x < y) cout << '<' << '\n';
        else cout << '=' << '\n';
    }
}
