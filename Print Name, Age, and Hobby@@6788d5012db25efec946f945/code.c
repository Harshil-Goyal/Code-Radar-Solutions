#include <stdio.h>

int main(){
    char name[123],hobby[123];
    int age;
    scanf("%s %s", &name, &hobby);
    scanf("%d",&age);
    printf("Name: %s\n Age: %d\n Hobby: %s",name,age,hobby);
    return 0;
}