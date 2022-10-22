#include <iostream>
using namespace std;

int main() {
    int n, k;
    float sum = 0;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        sum += x;
    }
    cout << (float) (sum + (-3 * (n - k))) / n << ' ';
    cout << (float) (sum + (3 * (n - k))) / n << '\n';
}