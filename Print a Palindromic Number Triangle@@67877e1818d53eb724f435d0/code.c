#include <stdio.h>
int main()
{
    int i,j,k,n,a;
    scanf("%d",&n);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j>=n+1-i && j<=i+(n-1))
            printf("%d",a);
            else
            printf(" ");
        }
        printf("\n"); 
    }
    return 0;
}