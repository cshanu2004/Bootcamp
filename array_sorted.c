#include<stdio.h>

int arraySorted(int[] , int );

int arraySorted(int a[],int n){
    for(int i=1;i<n-1;i++){
        if(a[i]>a[i+1]){
         return 0;
        }
    }
    return 1;
}
void main(){
    int n,a[5];
    printf("enter the no of element in array ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("enter the element of array ");
        scanf("%d",&a[i]);
    }
    int result = arraySorted(a,n);
    if (result==1){
        printf("The array is sorted");
    }
    else {
        printf("The array is not sorted");
    }
}