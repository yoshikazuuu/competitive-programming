#include <stdio.h>

int n, x, lost;

int main(){
    scanf("%d", &n);
    double A[10 * 10 * 10 * 10 * 10] = {0};
    for (int i = 0; i < (n * 4) - 1; i++){
        scanf("%d", &x);
        A[x]++;
    }
    for (int i = 0; i < (n * 4) - 1; i++){
        if (A[i] == 3){
            lost = i;
            break;
        }
    }
    printf("%d\n", lost);
}