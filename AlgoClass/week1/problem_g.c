#include <stdio.h>

int x, array[100];

int main(){
    return scanf("%d", &x) == 1 && x >= 1 && x <= 100 && (for (int i = 0; i < x; i++) scanf("%d", &array[i]) == 1 && array[i] >= 0 && array[i] < 1000) && (for (int i = x-1; i >= 0; i--) printf("%d%s", array[i], i == 0 ? "\n" : " "));
}
