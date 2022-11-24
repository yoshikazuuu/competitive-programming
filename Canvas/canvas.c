#include <stdio.h>

int main() {
    int n;
    long long nilai[20000];
    scanf("%d", &n);
    int max = -1;

    for (int i = 0; i < n; i++) {
        int locate;
        scanf("%d", &locate);
        if (max < locate) max = locate;
        nilai[locate]++;
    }

    int a = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] != 0) a++;
    }

    printf("%d\n", a);
    return 0;
}