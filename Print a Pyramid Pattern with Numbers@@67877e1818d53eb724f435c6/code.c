#include <stdio.h>
int main()
{
    int a,i,j,d;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {d=1;
        for(j=1;j<=2*a;j++)
        {
            if(j>=a-i+1 && j<=a+i-1)
               { printf("%d ",d);
                d++;}
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}