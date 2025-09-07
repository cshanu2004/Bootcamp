#include<stdio.h>
int main()
{
    int a[100],i,n,d;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the array :");
        scanf("%d",&a[i]);
    }
    printf("Enter the rotation d");
    scanf("%d",&d);

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    
    for(i=0;i<d;i++){
        int last = a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=last;
    }
    printf("\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}

    