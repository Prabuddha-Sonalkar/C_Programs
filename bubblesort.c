#include<stdio.h>

int main(){

    int a[50],i,j,n,data,temp,flag;

    printf("enter the total number of elements of array:\n");
    scanf("%d",&n);

    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("entered elements of array are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    printf("\n");
    printf("asending order of elements are :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

return 0;

}