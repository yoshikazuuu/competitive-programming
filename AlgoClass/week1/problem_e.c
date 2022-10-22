#include <stdio.h>

int array[10001];
int max = -1000001;
int min = 1000001;
long sum = 0;

int main(){
    int x;
    scanf("%d", &x);
    if (x <= 0 || x > 10000){
        return 0;
    }

    for (int i = 0; i < x; i++){
        scanf("%d", &array[i]);
        if (array[i] < -1000000 || array[i] > 1000000){
            return 0;
        }
    }

    for (int i = 0; i < x; i++){
        if (array[i] > max){
            max = array[i];
        }
    }

    for (int i = 0; i < x; i++){
        if (array[i] < min){
            min = array[i];
        }
    }

    for (int i = 0; i < x; i++){
        sum += array[i];
    }

    printf("%d %d %ld\n", min, max, sum);
}