#include <stdio.h>
int main()
{
    int a,i,j,n=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        n++;
        
        for(j=1;j<=a;j++)
        {
            if(j<=i)
            printf("%d ",n);
            else
            printf("  ");
            n++;
        }
        
        printf("\n");
    }
    
    return 0;
}