#include<stdio.h>
int reversearray(int[],int );
int reversearray(int a[],int n)
{
    int start,end,temp;
  for(int i =0;i<n;i++){
    if(start<end){
        temp=a[start];
        a[end]=temp;
        a[end] = a[start];

    }
    start++;
    end--;
  }

}
int printarray(int a[],int n){
    for (int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void main(){
    int n,a[100];
    printf("enter the no of element ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("enter the element of array ");
        scanf("%d",&a[i]);
    }
    printarray(a,n);
     reversearray(a,n);
   
}