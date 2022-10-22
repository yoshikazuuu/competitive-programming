#include <cstdio>
#include <cmath>

int main() {
    int N;

    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int x, kindaPrime = 0;
        scanf("%d", &x);

        bool prime = true;

        for (int divisor = 2; divisor <= sqrt(x); divisor++) {
            if (x % divisor == 0) {
                if (divisor == sqrt(x)) {
                    kindaPrime++;
                } else {
                    kindaPrime += 2;
                }
                if (kindaPrime > 2) {
                    prime = false;
                    break;
                }
            }
        }

        if (prime) {
            printf("YA\n");
        } else {
            printf("BUKAN\n");
        }
    }
}