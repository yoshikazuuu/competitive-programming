#include <stdio.h>

int a, b, c, n, x, isrunning = 1;
int counter;

int main() {
    scanf("%d %d", &n, &x);

    while (isrunning==1){

        b=a+1 ;
        c=x-(a+b) ;

        if(b>=c){
            break;
        }

        while(c>b){
            if(c<=x){
                counter+=1;
            }
            b+=1;
            c-=1;
        }
        a+=1;
    }
    printf("%d\n", counter);
}