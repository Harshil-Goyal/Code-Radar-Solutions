#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            if (j >= n - i + 1 && j <= n + i - 1) {
                if (j <= n) {
                    printf("%d", j - (n - i));
                } else {
                    printf("%d", (2 * n - j) - (n - i));
                }
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}