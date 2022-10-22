#include <iostream>
using namespace std;

int main() {
    int w, n, sum = 0;
    cin >> w >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        sum += x * y;
    }
    cout << sum / w;
}