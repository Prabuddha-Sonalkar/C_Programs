#include<stdio.h>
#define N 5

int stack[N];
int top=-1;

 void push()
 {
    int x;
    printf("entr data:\n");
    scanf("%d",&x);

    if(top==N-1)
    {
        printf("overflow:\n");
    }
    else 
    {
        top++;
        stack[top]=x;

    }
 }

 void pop()
 {
    int item;
    if(top==-1)
    {
        printf("underflow:\n"); 
    }
    else
    {
        item=stack[top];
        top--;
        printf("poped data is %d:\n",item);
    }
 }

 void peek()
 {
    if(top==-1)
    {
        printf("stack is empty:\n");
    }
    else
    {
        printf("peek dta is %d:\n",stack[top]);
    }
 }

 void display()
 {
    int i;
    for(i=top;i>0;i--)
    {
        printf("data in stack is%d:\n",stack[i]);
    }
 }

 int main(){

    int ch;
    
    do{
    printf("enter choice:- 1:push, 2:pop, 3:peek, 4:display \n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;

        default:
        printf("invalid choice:\n");
    
    }
    }while(ch!=0);

    return 0;

 }