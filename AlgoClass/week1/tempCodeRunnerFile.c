#include <stdio.h>

int main(){
    int n, x, num = 0, isRunning = 1;
    
    while (isRunning == 1){
        scanf("%d %d", &n, &x);
        getchar();

        if (n == 0 && x == 0) {
            printf("\n");
            break;
        }
        
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                for (int k = 1; k <= n; k++){
                    if (i + j + k == x && i < j && j < k){
                        num++;
                    }
                }
            }
        }
        printf("%d\n", num);
        num = 0;
    }
    // for (int i = 0; i < num - 1; i++){
    //     printf("%d\n", total[i]);
    // }
    
    return 0;
}

