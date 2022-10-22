#include <cstdio>

int main() {
    int d;

    scanf("%d", &d);

    if (d < 10) {
        printf("satuan\n");
    } else if (d < 100) {
        printf("puluhan\n");
    } else if (d < 1000) {
        printf("ratusan\n");
    } else if (d < 10000) {
        printf("ribuan\n");
    } else if (d < 100000) {
        printf("puluhribuan\n");
    }
}