#include <stdio.h>

int main()
{
    int i, j, a;
    scanf("%d", &a);

    // Loop through the rows
    for(i = 1; i <= a; i++)  
    {
        // Calculate the number of stars in the current row
        int k = (i <= a / 2) ? i : a - i + 1;

        // Loop through columns for each row
        for(j = 1; j <= a; j++)  
        {
            // Print star if we are within the range for the current row
            if(j >= (a / 2) - k + 1 && j <= (a / 2) + k)  
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
