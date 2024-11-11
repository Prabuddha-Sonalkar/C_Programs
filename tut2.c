#include<stdio.h>
#include<stdlib.h>   

void create()
{
     struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };

    struct node *head,*tail,*newnode;
    head=0;
    int choice=0;
    int count=0;
     


    do
    {
        newnode=(struct node *)malloc(sizeof(struct node));

        printf("enter the data:\n");
        scanf("%d",&newnode->data);

        newnode->next=0;
        newnode->prev=0;

        if(head==0)
        {
            head=tail=newnode;
        }
        else{
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
         printf("Do you want to continue(0,1):\n");
         scanf("%d",&choice);

        }while(choice!=0);
          tail=head;
    printf("data present in DLL is:\n");
    while(tail!=0)
    {
        printf("%d\t",tail->data);
        tail=tail->next;
        count++;
    }
    printf("count is %d:\n");
}


int insertion()
{
     struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };

     struct node *head,*tail,*newnode;
     int count=0;

    //insertion at beginning
   newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the data do you want insert at beginning:\n");
		scanf("%d",&newnode->data);

        head->prev=newnode;
        newnode->next=head;
        head=newnode;

}


void display()
{

     struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };

     struct node *head,*tail,*newnode;
     int count=0;

	tail=head;
    printf("Data present in doubly linked list:\n");
	while(tail!=0)
	{
		printf("%d\t",tail->data);
		tail=tail->next;
		
	}
    count++;
	printf("\ncount is %d:",count);
}


int main()
{

    int ch;

do{
    printf("PRESS....1 for create or 2 for insertion or 3 for display:\n");
    scanf("%d",&ch);


       
       switch(ch)
       {
        case 1:
        create();
        break;

        case 2:
       insertion();
        break;

        case 3:
        display();
        break;

        default:
        printf("\ninvalid choice");
       }
    }while(ch!=0);

}