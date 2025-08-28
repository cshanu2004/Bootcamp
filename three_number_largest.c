#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the number a");
    scanf("%d",&a);
    printf("Enter the number b");
    scanf("%d",&b);
    printf("Enter the number c");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is the largest number");

    }
    else if(b>a && b>c){
        printf("b is largest number");

    }
    else{
        printf("c is largest number");
    }
}