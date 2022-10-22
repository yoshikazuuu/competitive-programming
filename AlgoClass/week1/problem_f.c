    #include <stdio.h>

    int H, W;

    int main() {
        int isRunning = 1;
        while (isRunning == 1) {
            scanf("%d %d", &H, &W);

            if (H == 0 && W == 0) {
                break;
            }

            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    if (j > 0 && j < W - 1 && i > 0 && i < H - 1 ) {
                        printf(".");
                    } else {
                        printf("#");
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }