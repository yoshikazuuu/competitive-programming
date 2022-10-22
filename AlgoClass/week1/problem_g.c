#include <stdio.h>

int x, array[100];

int main(){
    scanf("%d", &x);
    if (x < 1 || x > 100){
        return 0;
    }

    for (int i = 0; i < x; i++){
        scanf("%d", &array[i]);
        if (array[i] < 0 || array[i] >= 1000){
            return 0;
        }
    }

    for (int i = x-1; i >= 0; i--){
        printf("%d", array[i]);
        if (i == 0){
            printf("\n");
        } else {
            printf(" ");
        }
    }
    
}