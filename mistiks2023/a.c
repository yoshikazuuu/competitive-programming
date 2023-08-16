#include <stdio.h>
#include <stdlib.h>
#define int long long

signed main() {
  int a, b, c, d;
  scanf("%lld %lld", &a, &b);
  scanf("%lld %lld", &c, &d);
  if (a * d > b * c)
    printf("lebih besar");
  else if (a * d == b * c)
    printf("sama");
  else
    printf("lebih kecil");

  printf("\n");

  return 0;
}