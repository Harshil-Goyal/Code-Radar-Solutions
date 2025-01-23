#include <stdio.h>

int main(){
    long int a;
    scanf("%d",&a);
    if((a>>31)==-1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}