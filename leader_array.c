#include <stdio.h>

int main() {
    int n, arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ");
        scanf("%d", &arr[i]);
    }

    
    int maxRight = arr[n - 1]; 
    printf("Leaders: %d ", maxRight);

    
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            maxRight = arr[i]; 
            printf("%d ", maxRight);
        }
    }

    printf("\n");
    return 0;
}
