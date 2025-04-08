#include <stdio.h>
int main()
{
    int a,i,j,n=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        
        for(j=n;j<=a;j++)
        {
            if(j<=i)
            printf("%d ",j);
            n++;

        }
        
        printf("\n");
    }
    
    return 0;
}