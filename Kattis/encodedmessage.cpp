#include <iostream>
#include <math.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        int iter = sqrt(s.size());
        for (int i = 0; i < iter; i++) {
            for (int j = 0; (iter - i) + iter * j <= s.size(); j++) {
                cout << s[((iter - i) + iter * j) - 1];
            } 
        }
        cout << "\n";
    }
}
