#include <cstdio>
#include <math.h>

int main()
{
    int x;

    scanf("%d", &x);

    while (x >= 1 and x <= pow(2, 16))
    {
        if (x % 2 != 0 and x > 1)
        {
            printf("bukan\n");
            return 0;
        }
        x /= 2;
    }
    printf("ya\n");
    return 0;
}