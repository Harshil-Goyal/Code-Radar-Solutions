#include <stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        for(j=a;j<=a;j++)
        {
            if(j>=1 && j<=i)
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}