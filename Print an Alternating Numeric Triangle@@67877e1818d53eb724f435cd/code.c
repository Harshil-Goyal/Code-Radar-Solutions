#include <stdio.h>

int main() {
    int a, i, j;
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        for (j = 1; j <= a; j++) {
            if (j <= i) {
                if ((i + j) % 2 == 0) {
                    printf("1 ");
                } else {
                    printf("0 ");
                }
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
