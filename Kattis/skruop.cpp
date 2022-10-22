#include <iostream>
using namespace std;

int main() {
    int n, vol = 7;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        string s;
        string s1 = "Skru ned!";
        string s2 = "Skru op!";
        getline(cin, s, '\n');
        if (s == s2) {
            vol++;
        } else if (s == s1) {
            vol--;
        }
        if (vol == 11) {
            vol = 10;
        }
        if (vol == -1) {
            vol = 0;
        }
    }
    cout << vol;
}