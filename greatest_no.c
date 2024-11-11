#include<stdio.h>

int main(){

    int a,b,c;

    printf("enter any three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("entered numbers are:\n");
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);

    if(a>b && a>c)
    {
        printf("a is greatest:\n");
    }
    else if(b>c)
    {
        printf("b is greatest:\n"); 
    }
    else
    {
        printf("c is greatest:\n");
    }

    return 0;
}