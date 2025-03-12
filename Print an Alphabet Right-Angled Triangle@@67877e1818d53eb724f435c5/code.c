#include <stdio.h>
int main()
{
    int a,i,j;
    char d ;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    { d='A';
        for(j=1;j<=i;j++)
        {
            printf("%c",d);
            d++;
        }
        printf("\n");
    }
    return 0;
}