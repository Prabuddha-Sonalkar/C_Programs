#include<stdio.h>
#define N 50
int main(){
	
	int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
	
	printf("enter the rows and column of first matrix:\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	 } 
	 
    printf("enter the rows and column of second matrix:\n");
	scanf("%d%d",&p,&q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	 } 
	 
	 printf("first matrix is:\n");
	 for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	 } 
	 
	 printf("second matrix is:\n");
	 for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	 } 
	 
	 if(n!=p)
	 {
	 	printf("can not multiply");
	 }
	 else
	 {
	 	for(i=0;i<m;i++)
	 	{
	 		for(j=0;j<n;j++)
	 		{
	 			sum=0;
	 			for(k=0;k<m;k++)
	 			{
	 				sum=sum+(a[i][k]*b[k][j]);
				 }
				 c[i][j]=sum;
			 }
	 		
		 }
	 	
	 	printf("multiplication is:\n");
	 	for(i=0;i<m;i++)
		 {
		 	for(j=0;j<q;j++)
		 	{
		 		printf("%d\t",c[i][j]);
			 }
			 
			 printf("\n");
		 }
	 }
	 
	return 0;
}