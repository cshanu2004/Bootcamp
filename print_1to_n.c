#include<stdio.h>
int printnum(int);
int printnum(int n){
    if(n==0){
        return 0;

    }
    else{
       
        printnum(n-1);
        printf("%d  ",n);
    }
}
int main(){
    int n;
    printf("enter the number n");
    scanf("%d",&n);
    printf("1 to %d:  ",n);
    printnum(n);
    printf("\n");

}