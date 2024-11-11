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

    if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;

    }
    else if(((rear+1)%N)==front)
    {
        printf("queue is full:\n");
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
    }

}

void dequeue()
{
     if(front==-1 && rear==-1)
     {
        printf("queue is empty:\n");
     }
     else if(front ==rear)
     {
        printf("dequeued data is %d:\n" ,queue[front]);
        front=rear=-1;
     }
     else 
     {
        printf("dequeued data is %d:\n",queue[front]);
        front=(front+1)%N ; 
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
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty:\n");
    }
    else
    {
        printf("queue is:\n");
        while (i!=rear)
        {
            printf("data is %d\n",queue[i]);
            i=(i+1)%N;
        }
        printf("%d\n",queue[rear]);
    }

}

int main(){

    int ch;


do
   {
    printf("enter choice:- 1:enqueue, 2:dequeue, 3:peek, 4:display \n");
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