#include<stdio.h>

int main(){

    int a[50],i,j,n,temp;

printf("enter the total number of elements:\n");
scanf("%d",&n);

printf("enter the elements of array:\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("entered elements of array are:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

for(i=1;i<n;i++)
{
    temp=a[i];
    j=i-1;
    while(j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}

printf("\n");
printf("asending order of array are:\n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);

return 0;

}