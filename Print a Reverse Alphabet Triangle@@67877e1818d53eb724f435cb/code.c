#include <stdio.h>
int main()
{
    int a,i,j;
    char c;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        c='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}