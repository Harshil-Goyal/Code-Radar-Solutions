#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    k = k % n; // Handle cases where k > n

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
        if (i < n - 1) { // Print space only if it's not the last element
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}