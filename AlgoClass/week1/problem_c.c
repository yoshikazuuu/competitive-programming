#include <stdio.h>

int a[3];

int main(){
    for (int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
    }
    
    if (a[0] < 0 || a[1] < 0 || a[2] < 0 || a[0] > 100 || a[1] > 100 || a[2] > 100){
        return 0;
    }

    if(a[0] < a[1] && a[1] < a[2] && a[0] < a[2]){
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}