#include <stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a+i;j++)
        {
            if(j>=5-i && j<=3+i)
            printf("*");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}