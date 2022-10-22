#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    // if (!(n <= 2 * pow(10, 5) && k <= pow(10, 9) && k >= 0)){
    //     return 0;
    // }

    int A[n], B[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        // if (!(A[i] <= pow(10, 9) && A[i] > 0)){
        //     return 0;
        // }
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
        // if (!(B[i] <= pow(10, 9)) && B[i] > 0){
        //     return 0;
        // }
    }

    int i = 0;
    while ((abs(A[i] - A[i + 1]) <= k || abs(B[i] - B[i + 1] <= k) || abs(B[i] - A[i + 1]) <= k || abs(B[i] - A[i + 1]) <= k) && (i <= n - 1 && n >= 1)) {
        i++;
        // printf("%d", i);
        if (i == n) {
            printf("Yes\n");
            return 0;
        }
    }
    if (i != n) {
        printf("No\n");
    }
    return 0;
}