#include<stdio.h>


int a[50],b[50],lb,ub,i,j,k;

int merge(int a[],int lb,int mid,int ub)
{
	mid=(lb+ub)/2;
	i=lb;
	j=mid+1;
	k=lb;
	
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])
		{
			b[k]=a[i];
			i++;
		}
		else
		{
		    b[k]=a[j];
			j++; 	
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k]=a[i];
			i++;
			k++;
		}
	}
	
	for(k=lb;k<=ub;k++)
	{
		a[k]=b[k];
	}
}

int mergesort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
	mid=(lb+ub)/2;
	mergesort(a, lb, mid);
	mergesort(a,mid+1,ub);
	merge(a,lb,mid,ub);
    }  
}

int main(){

    int a[100],n,i;

    printf("enter the total number of elements:\n");
    scanf("%d",&n);
    
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("entered elements of array are:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    mergesort(a,0,n-1);

    printf("\n");
    printf("asending order of merge sort is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    return 0;
}