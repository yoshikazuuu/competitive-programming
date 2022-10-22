#include <iostream>
using namespace std;

int main() {
    char num[7];
    cin >> num;
    for (int i = 0; i < 3; i++) {
        if (num[i] != '5') {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}