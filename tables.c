#include<stdio.h>

int main(){

    int i=1,n;
    
    printf("enter the number for table:\n");
    scanf("%d",&n);
    printf("\n");
    while(i<=10)
    {
        printf("%d\n",i*n);
        i++;
    }
}