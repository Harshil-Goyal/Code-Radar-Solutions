#include <stdio.h>

int main()
{
    int i, j, a;
    scanf("%d", &a);

    for(i = 1; i <= a; i++)  
    {
        int k = (i <= a / 2) ? i : a - i + 1;

        for(j = 1; j <= a; j++)  
        {
            if(j >= (a / 2) - k + 1 && j <= (a / 2) + k)  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
