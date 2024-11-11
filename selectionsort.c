#include<stdio.h>

int main(){
	
	int a[50],i,j,n,min,temp;
	
	printf("enter the total number of elements :\n");
	scanf("%d",&n);
	
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

    printf("entered elements of array are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	
	for(i=0;i<n-1;i++)
	{
		 min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
    printf("\n");
	printf("asending order of elements are:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	return 0;
}