#include<stdio.h>

int main(){

    int a[50],i,n,data,l=0,r,mid,flag;

    printf("enter the total number of elements:\n");
    scanf("%d",&n);

    r=n-1;

    printf("enter the elemenys of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter the number to be searched:\n");
    scanf("%d",&data);

    while(l<=r)
    {
         //flag=1;
        mid=(l+r)/2;

        
        if(data==a[mid])
        {
            printf("data is found at index %d",mid);
           
            break;
        }
        if(data<a[mid])
        r=mid-1;
        else
        l=mid+1;
    }
    //if(flag==0)
    if(l>r)
    printf("data is not found:\n");
    
    return 0;
    
}