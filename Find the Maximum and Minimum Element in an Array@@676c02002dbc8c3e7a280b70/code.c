#include <stdio.h>
int main()
{
    int a[int b] ,b, i , a1, a2; 
    scanf("%d",&b);
    for(i=0;i<=(b-1);i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=b,i++)
    {
        if(a[i]<a[i+1])
        a1=a[i];
    }
        for(i=0;i<=b,i++)
    {
        if(a[i]>a[i+1])
        a2=a[i];
    }
printf("%d %d",a1,a2);
}