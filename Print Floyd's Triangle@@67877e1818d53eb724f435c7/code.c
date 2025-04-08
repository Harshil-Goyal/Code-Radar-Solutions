#include <stdio.h>
int main()
{
    int a,i,j,n;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
     n=1;   
        for(j=1;j<=a;j++)
        {
            if(j<=i)
            printf("%d ",n);
            else
            printf("  ");
            n++;
        }
     n++;
        printf("\n");
    }
    
    return 0;
}