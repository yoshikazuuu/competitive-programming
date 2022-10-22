#include <stdio.h>

int main(){
    for (int i = 1; i <= 10000; i++){
        int x;
        scanf("%d", &x);
        if(x <= 0 || x > 10000){
            return 0;
        }
        printf("Case %d: %d\n", i, x);
    }
}