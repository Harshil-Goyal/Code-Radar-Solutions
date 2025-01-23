#include <stdio.h>

int main(){
    double a;
    scanf("%lf",&a);
    if(a&1){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
    return 0;
}