#include <iostream>
using namespace std;

int main() {
    int n, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        total += x;
    }
    cout << total - n + 1;
}