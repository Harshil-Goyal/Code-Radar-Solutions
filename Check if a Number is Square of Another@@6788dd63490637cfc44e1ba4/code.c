#include <stdio.h>
int main()
{
    double a,b;
    scanf("%lf %lf", &a, &b);
    if (a==b*b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
