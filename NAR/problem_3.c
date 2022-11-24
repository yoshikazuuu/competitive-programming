#include <stdio.h>
#include <math.h>
#include <string.h>

void solve() {
    int x;
    scanf("%d", &x);
    while (x >= 1000) {
        putchar('M');
        x -= 1000;
    }
    while (x >= 600) {
        putchar('R');
        x -= 600;
    }
    while (x >= 100) {
        putchar('C');
        x -= 100;
    }
    while (x >= 50) {
        putchar('L');
        x -= 50;
    }
    while (x >= 10) {
        putchar('X');
        x -= 10;
    }
    while (x >= 9) {
        putchar('N');
        x -= 9;
    }
    while (x >= 6) {
        putchar('S');
        x -= 6;
    }
    while (x >= 1) {
        putchar('O');
        x -= 1;
    }
    putchar('\n');
}

int main() {
    solve();
    return 0;
}