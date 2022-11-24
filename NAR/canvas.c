#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    int a[4][4] = {0};/*{3, 4, 5, 6, 5, 6, 7, 9, 1, 7, 11, 10, 2, 8, 9, 4};*/
    int b[4][4] = {0};/*{1, 2, 3, 4, 6, 7, 6, 5, 9, 10, 11, 2, 6, 5, 4, 3};*/
    int c[4][4] = {0};

    int n;
    printf("Insert square matrix size: ");
    scanf("%d", &n);

    printf("Masukkan square matrix ke-1: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Masukkan square matrix ke-2: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Hasil perkalian kedua matrix: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j]; 
            }
            printf("%d ", c[i][j]);
        }
        putchar('\n');
    }
}