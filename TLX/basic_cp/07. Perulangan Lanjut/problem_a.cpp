#include <cstdio>

int main()
{
    int N;

    scanf("%d", &N);

    if (1 >= N  and N >= 50)
    {
        return 0;
    }    

    for (int i = 1; i <= N; i++)
    {
        if (i % 10 == 0)
        {
            continue;
        }
        if (i == 42)
        {
            printf("ERROR\n");
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}