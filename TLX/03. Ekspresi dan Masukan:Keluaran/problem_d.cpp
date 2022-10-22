#include <cstdio>

int main() {
    int banyakBebek, banyakBagi;

    scanf("%d %d\n", &banyakBebek, &banyakBagi);
    printf("masing-masing %d\n", banyakBebek / banyakBagi);
    printf("bersisa %d\n", banyakBebek % banyakBagi);
}