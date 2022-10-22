#include <iostream>

using namespace std;

int main() {
    int hh[1439], mm[1439], minutes[1439], n;

    cin >> n;
    if (!(1 <= n || n <= 1439)) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> hh[i] >> mm[i];
        if (!(0 <= hh[i] || hh[i] < 24 || 0 <= mm[i] || mm[i] < 60)) {
            return 0;
        }
        minutes[i] = 1440 - (hh[i] * 60 + mm[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", minutes[i]);
    }
}