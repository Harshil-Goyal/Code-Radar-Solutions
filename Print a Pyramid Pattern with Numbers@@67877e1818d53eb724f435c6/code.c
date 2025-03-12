#include <stdio.h>

int main() {
    int a, i, j, d;
    scanf("%d", &a);

    for(i = 1; i <= a; i++) {
        d = 1;

        for(j = 1; j <= a - i; j++) {
            printf(" ");
        }

        printf("%d", d);
        d++;

        if (i > 1) {
            for(j = 1; j <= 2 * i - 3; j++) {
                printf("  ");
            }
            printf("%d", d);
        }

        printf("\n");
    }

    return 0;
}
