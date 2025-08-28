#include<stdio.h>
void main(){
    int n,i;
    printf("Enter the number n");
    scanf("%d",&n);
    if(n<0){
        printf("the number be negative");
    }
    else if(n>0){
        printf("the number is positive");

    }
    else{
        printf("the number be a zero");
    }
}