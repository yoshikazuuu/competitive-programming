#include <cstdio>

int main() {
    int d;

    scanf("%d", &d);

    if (d > 0) {
        printf("positif\n");
    } else if (d < 0) {
        printf("negatif\n");
    } else if (d == 0) {
        printf("nol\n");
    }
}