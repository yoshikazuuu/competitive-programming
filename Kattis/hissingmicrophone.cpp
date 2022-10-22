#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 's' and s[i + 1] == 's') {
            cout << "hiss";
            return 0;
        }
    }
    cout << "no hiss\n";
    return 0;
}