#include <stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            if (j >= n + 1 - i && j <= n - 1 + i) {
                if (j <= n) {
                    k = n - (n - j) - (n - i) + 1;
                } else {
                    k = n - (j - n) - (n - i) + 1;
                }
                printf("%d", k);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}