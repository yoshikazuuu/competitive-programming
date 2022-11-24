#include<stdio.h>
long long A(long long x) {
if (x==0) return 0;
else return 1+A(x-1);
}
long long B(long long x) {
if (x==0) return 0;
else return A(x)+B(x-1);
}
long long C(long long x) {
if (x==0) return 0;
else return B(x)+C(x-1);
}
long long D(long long x) {
if (x==0) return 0;
else return C(x)+D(x-1);
}
int main() {
printf("%lld\n", D(5));
return 0;
}