#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    if(isupper(c)){
        printf("Uppercase");
    }
    else if (isalpha(c)){
        printf("Not an alphabet");
    }
    else;
    printf("Lowercase");
    return 0;

}