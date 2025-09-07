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
       for (int i = 0; i < d; i++) {
      
        
        int first = a[0];
        for (int j = 0; j < n - 1; j++) {
            a[j] = a[j + 1];
        }
        a[n - 1] = first;
    }
    
    
    printf("\n");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}

    
    