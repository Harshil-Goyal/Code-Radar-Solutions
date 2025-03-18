#include <stdio.h>
int main() {
    int b, i, c = -1;
    scanf("%d", &b);
    int a[b];
    for(i = 0; i < b; i++) {
        scanf("%d", &a[i]);
    }
    for(i = 1; i < b - 1; i++) {
        if(a[i] > a[i-1] && a[i] > a[i+1]) {
            c = a[i];
            break;
        }
    }
    if(c == -1) {
        if(a[0] > a[1]) {
            c = a[0];
        } else if(a[b-1] > a[b-2]) {
            c = a[b-1];
        }
    }
    printf("%d\n", c);
    return 0;
}
