#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.length() - 1; i++) {
        cout << s[i];
    }
    for (int i = 1; i < s.length() - 1; i++) {
        cout << s[i];
    }
    cout << s[s.length() - 1];
}