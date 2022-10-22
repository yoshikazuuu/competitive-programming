#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    string s;
    int left = 0, right = 0;
    cin >> s;
    for (int i = 0; s[i] != '('; i++) {
        left++;
    }
    for (int i = left + 2; s[i] != '\0'; i++) {
        right++;
    }
    if (left == right) {
        cout << "correct\n";
    } else {
        cout << "fix\n";
    }

}
