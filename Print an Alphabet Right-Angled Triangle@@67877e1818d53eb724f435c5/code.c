#include <stdio.h>
int main()
{
    int a,i,j;
    char d = 'A';
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    { 
        for(j=1;j<=i;j++)
        {
            printf("%c\n ",d);
        }
        printf("%c", d++);
        
    }
    
    return 0;
}