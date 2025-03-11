#include <stdio.h>
int main()
{
    int a,i,j,k;
    k=1;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    k++;
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}