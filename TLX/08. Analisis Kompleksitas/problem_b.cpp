#include <cstdio>
#include <cmath>

int main() {
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);

        bool prime = true;
        if (x == 1) {
            prime = false;
        }

        for (int divisor = 2; divisor <= sqrt(x); divisor++) {
            if (x % divisor == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}