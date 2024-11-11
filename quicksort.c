#include<stdio.h>

int a[100],lb,ub;

int partition(int a[],int lb ,int ub)
{
    int pivot,start,end,temp;

    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }

    }
    temp=a[lb];
    a[lb]=a[end];
    a[end]=temp;

    return end;
}

int quicksort(int a[],int lb,int ub)
{
    int loc;
    if(lb<ub)
    {
    loc=partition( a, lb, ub);
    quicksort(a,lb,loc-1);
    quicksort(a,loc+1,ub);
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

    quicksort(a,0,n-1);

    printf("\n");
    printf("asending order of quick sort is:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);

    return 0;
}