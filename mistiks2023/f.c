#include <math.h>
#include <stdio.h>

double solve(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
  int R1, R2;
  double X1, Y1, X2, Y2;

  scanf("%d %lf %lf %d %lf %lf", &R1, &X1, &Y1, &R2, &X2, &Y2);

  if (solve(X1, Y1, X2, Y2) + R2 <= R1) {
    printf("Berhasil\n");
  } else {
    printf("Gagal\n");
  }

  return 0;
}
