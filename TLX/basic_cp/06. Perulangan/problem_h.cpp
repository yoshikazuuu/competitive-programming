#include <cstdio>

int main() {
    int N, y;

    scanf("%d %d", &N, &y);

    for (int i = 1; i <= N; i++) 
    {
        if (i % y == 0)
        {
            printf("* ");
        } else
        {
            printf("%d ", i);
        }     
    }
    printf("\n");
    return 0;
}