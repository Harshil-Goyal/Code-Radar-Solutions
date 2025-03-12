#include <stdio.h>

int main() {
    int a, i, j, d;
    scanf("%d", &a); 

    for(i = 1; i <= a; i++) {
        d = 1;  
        for(j = 1; j <= a - i; j++) 
            printf("  ");  

        for(j = 1; j <= 2 * i - 1; j++) {
            printf("%d ", d);  
            d++;  
        }

        printf("\n");
    }

    return 0;
}
