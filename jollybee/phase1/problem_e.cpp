#include <cstdio>

int main() {
    char str[11];
    int n;

    scanf("%d %[a-z]", &n, str);

    for (int i = 0; i < n; i++) {
        printf("%s\n", str);
    }
    return 0;
}