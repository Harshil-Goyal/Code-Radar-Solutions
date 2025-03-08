#include <stdio.h>

int main()
{
    int i, j, k, a;
    scanf("%d", &a);

    for(i = 1; i <= a; i++)  
    {
        k = (i <= a / 2) ? i : a - i;  

        for(j = 1; j <= a; j++)  
        {
            if(j >= a - k + 1 && j <= a + k - 1)  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
