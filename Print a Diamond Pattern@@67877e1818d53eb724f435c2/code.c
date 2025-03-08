#include <stdio.h>
int main()
{
    int i,j,k,a;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        i<=a-2?(k=i):(k=a+1-i);
        for(j=1;j<=a;j++)
        {
            if(j>=a-1-k && j<=a-3+k)
            printf(" *");
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}