#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if (isalpha(ch)){
        if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i'  || ch=='I'  ||
        ch=='o'  || ch=='O'  ||  ch=='u'  ch=='U')}{
            prinf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(isdigit(ch)){
        prinf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}