#include <cstdio>

int main() {
    int x[99], i = 0;

    while (scanf("%d", &x[i]) != EOF) {
        i++;
    }

    for (int j = (i-1); j >= 0; j--) {
        printf("%d\n", x[j]);
    }   
}