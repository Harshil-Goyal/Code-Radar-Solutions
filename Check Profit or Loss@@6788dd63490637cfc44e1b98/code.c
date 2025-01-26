#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if((b-a)>0)
    {
        printf("Profit");
    }
    else if((b-a)<0)
    {
        printf("Loss");
    }
    else
    {
        printf("No profit No Loss");
    }
    return 0;
}