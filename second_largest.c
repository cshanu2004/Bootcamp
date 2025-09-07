#include<stdio.h>
int secondlargest(int[],int);
int secondlargest(int a[],int n){
    int secondlargest=a[0];
    int largest =a[0];
    for(int i = 1; i<n; i++){
        if (a[i] > largest){
            secondlargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondlargest && a[i] != largest){
            secondlargest = a[i];
        }
        
    }
    return secondlargest;
}
void main(){
    int n,a[100];
    printf("enter the no of element in array ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("enter the element of array ");
        scanf("%d",&a[i]);
    }
    secondlargest(a,n);
    printf("%d",secondlargest(a,n));
}