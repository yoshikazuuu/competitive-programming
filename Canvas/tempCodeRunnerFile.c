#include <stdio.h>
#define True 1
#define False 0

int check(int n, int pembagi) {
    if (n % pembagi == 0) return True;
    else return False;
}

int main() {
    int a, b, k;
    scanf("%d %d %d", &a, &b, &k);

    for (int i = 1; i <= k; i++) {
        if (check(i, a)) printf("BOM");
        if (check(i, b)) printf("DUARR");
        if (!(check(i, a) || check(i, b))) printf("%d", i);
        printf("\n");       
    }

    return 0;
}