#include <stdio.h>
int main()
{
    int a,i,j;
    char c;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c='A';
        c++;
        for(j=1;j<=a;j++)
        {
            if(j<=i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    return 0;
}