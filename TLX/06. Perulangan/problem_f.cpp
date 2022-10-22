#include <cstdio>

int main()
{
    int x;

    scanf("%d", &x);

    for (int i = x; i >= 1; i--)
    {
        if (x % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}