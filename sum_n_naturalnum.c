#include<stdio.h>
int sum(int);
int sum(int n){
    if(n==1){
        return 1;

    }
    else if(n==0){
        return 0;
    }
    else{
        return(n+sum(n-1));
    }

}
void main(){
   int n;
   printf("enter the number n ");
   scanf("%d",&n);
   printf("%d",sum(n));
}