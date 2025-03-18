#include <stdio.h>
int main()
{
    int b,i,a1,a2;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    scanf("%d",&a[i]);
    a1=0;
    a2=0;
    for(i=0;i<b;i++)
    {
        if(a[i]%2==0)
        a1=a1+1;
    }
        for(i=0;i<b;i++)
    {
        if(a[i]%2!=0)
        a2=a2+1;
    }
    printf("%d %d",a1,a2);

}