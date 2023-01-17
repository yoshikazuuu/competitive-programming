#include <cstdio>

int main() {
    int a, b, total = 0;

    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        total += b;
    }
    printf("%d\n", total);
}