#include <iostream>

using namespace std;

int total = 0;

int nilaiAbsolut(int a, int b, int x) {
    x = a*x + b;
    if (x < 0) {
        x *= -1;
    }
    return x;
}

int main() {
    int a, b, x, k;
    cin >> a >> b >> k >> x;
    
    for (int i = 0; i < k; i++) {
        x = nilaiAbsolut(a, b, x);
    }

    cout << x;
}