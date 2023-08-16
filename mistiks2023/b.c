#include <stdio.h>
#define ll long long int

int main() {
  ll N, M, S, P;
  scanf("%lld", &N);
  scanf("%lld", &M);
  scanf("%lld", &S);
  scanf("%lld", &P);

  ll total_seconds = (N - 1) * P + N * (M * 60 + S);

  ll minutes = total_seconds / 60;
  ll seconds = total_seconds % 60;

  printf("%lld\n%lld\n", minutes, seconds);

  return 0;
}
