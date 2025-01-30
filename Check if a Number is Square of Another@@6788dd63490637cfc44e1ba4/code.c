#include <stdio.h>
int main()
{
    float a,b;
    scanf("%.2f %.2f",&a, &b);
    if (a=b*b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
