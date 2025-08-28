#include<stdio.h>
long int fact( long int n);

long int fact(long int n){
    if(n==0||n==1){
        return 1;

    }
    else{
        return n*fact(n-1);
    }
}
void main(){
    long int num;
    printf("enter the number n ");
    scanf("%ld",&num);
    printf(" the factorial of number %ld",fact(num));
}