#include <stdio.h>
int main()
{
    int b,i,c;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d\n",a[i]);
    }
    for(i=0;i<b;i++)
    {
        if(a[i]>a[i+1]  && a[i]>a[i-1])
        c=a[i];
    }
    printf("%d",c);

}