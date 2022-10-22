#include <stdio.h>

char alphabet[] = {"abcdefghijklmnopqrstuvwxyz"};
int x;

int main(){
    for (int i = 0; i < 26; i++){
        scanf("%d", &x);
        if (x < 1 || x > 26){
            return 0;
        }   
        printf("%c", alphabet[x-1]);
    }
    printf("\n");
}