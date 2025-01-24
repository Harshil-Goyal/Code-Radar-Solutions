#include<stdio.h>
int main(){
    char c;
    scanf("%s",&c);
    if(isupper(c)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase")
    }
    return 0;

}