#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(isprime(a))
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}