#include<stdio.h>

int main(){

    int a[20],i,n;

    printf("enter the total number of elements of array:\n");
    scanf("%d",&n);

    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("entered elements of array are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    
    printf("\n");
    printf("result of even and odd as follows:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d is even:\n",a[i]);
            
        }
        else
        {
            printf("%d is odd:\n",a[i]);
            
        }
    }

    return 0;
}
