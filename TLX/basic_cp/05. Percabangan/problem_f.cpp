#include <cstdio>
#include <cmath>

int main() {
    float a;

    scanf("%f", &a);

    if (a == trunc(a)) {
        printf("%.f %.f\n", a, a);
    } else if (a > 0) {
        printf("%d %.f\n", int(a), trunc(a+1));
    } else {
        printf("%.f %d\n", trunc(a-1), int(a));
    }
}