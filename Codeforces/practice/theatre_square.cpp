#include <iostream>

using namespace std;

int main() {
    int n, m, a;
    long long i_n = 0, i_m = 0;

    scanf("%d %d %d", &n, &m, &a);
    long long counter_n = n - (n % a);
    long long counter_m = m - (m % a);

    if (counter_n < n) {
        counter_n += a;
    }

    if (counter_m < m) {
        counter_m += a;
    }
 
    printf("%lld\n", (counter_n / a * counter_m / a));
}