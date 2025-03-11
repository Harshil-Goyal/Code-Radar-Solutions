#include <stdio.h>
int main()
{
    int a,i,j,k=1;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}