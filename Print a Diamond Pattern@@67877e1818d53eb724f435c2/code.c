#include <stdio.h>
int main()
{
    int a,i,j,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    i<=3?(k=i):(k=6-i);
    {
        for(j=1;j<=a;j++)
        {
            if(j>=4-k && j<=2+k)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}