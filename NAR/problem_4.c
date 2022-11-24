#include <stdio.h>
#include <math.h>
#include <string.h>

void solve() {
    int x, counter = 0;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        int temp = i;
        while (temp > 0) {
            if (temp % 10 == 1 || temp % 10 == 3 || temp % 10 == 6) counter++;
            temp /= 10;
        }
    }
    
    printf("%d\n", counter);
}

int main() {
    solve();
    return 0;
}