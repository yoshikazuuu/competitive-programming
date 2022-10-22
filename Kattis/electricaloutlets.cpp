#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int sum = 0, n2, x;
        cin >> n2;
        for (int j = 0; j < n2; j++) {
            int x;
            cin >> x;
            sum += x;
        }
        sum -= n2 - 1;
        cout << sum << "\n";
    }
}