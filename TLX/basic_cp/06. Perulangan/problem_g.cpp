#include <cstdio>

int main()
{
    int x, y, max = 0, min = 0;

    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y);
        if (i == 0)
        {
            max = min = y;
        }
        if (y > max)
        {
            max = y;
        } else if (y < min)
        {
            min = y;
        }
    }   
    printf("%d %d\n", max, min);
    return 0;
}