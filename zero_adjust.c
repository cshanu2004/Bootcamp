#include <stdio.h>

void main() {
    int n, a[100], temp[100], j = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
  
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
      for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp[j] = a[i];
            j++;
        }
        else{
            continue;
        }
    }
    while(j<=n){
        temp[j]=0;
        j++;
    }
    for(int i=0;i<n;i++){
         printf("%d ", temp[i]);
    }
    
    
    
}