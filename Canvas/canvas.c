#include <stdio.h>
#include <math.h>
#include <string.h>

void solve() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    double rot = (double) a * b / 360;
    printf("%.2lf\n", rot);
}

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        solve();
    }
    return 0;
}