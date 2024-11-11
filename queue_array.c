#include<stdio.h>
#define N 5

int queue[N];
int front=-1;
int rear=-1;

void enqueue()
{
    int x;
    printf("enter data:\n");
    scanf("%d",&x);

    if(rear==N-1)
    {
        printf("overflow:\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("underflow:\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        printf("dequeued data is %d:\n",queue[front]);
        front ++;
    }
}

void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty:\n");
    }
    else
    {
        printf("peek data is %d:\n",queue[front]); 
    }
}

void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
       printf("queue is empty:\n"); 
    }
    else
    {
        for(i=0;i<rear+1;i++)
        {
            printf("data in queue is %d :\n",queue[i]);
        }
    }

}
 
int main(){

    int ch;


do
   {
    printf("enter choice:- 1:inqueue, 2:dequeue, 3:peek, 4:display \n");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        enqueue();
        break;

        case 2:
        dequeue();
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