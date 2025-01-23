#include <stdio.h>

int main(){
    long int a;
    scanf("%ld",&a);
    if((a>>32)==-1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}