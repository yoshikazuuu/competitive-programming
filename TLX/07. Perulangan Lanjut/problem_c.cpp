#include <cstdio>

int main() {
    int N, num = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++)
        {
            printf("%d", num);
            num++;
            if (num == 10)
            {
                num = 0;
            }
        }
        printf("\n");
    }
    return 0;
}