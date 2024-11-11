#include<stdio.h>
#include<stdlib.h>

int main(){

	
	struct node
	{
		int data;
		struct node *next;
        struct node *prev;
	};
	

	struct node *head,*newnode,*tail;
	head=0;
	int choice;
	int count=0;
	

	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:\n");
		scanf("%d",&newnode->data);
        	
        newnode->prev=0;
		newnode->next=0;
		
		if(head==0)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
            newnode->prev=tail;
			tail=newnode;
		}
		
		printf("Do you want to continue(0,1)?:\n");
		scanf("%d",&choice);
	}
    

 
	//display
	tail=head;
    printf("Data present in doubly linked list:\n");
	while(tail!=0)
	{
		printf("%d\t",tail->data);
		tail=tail->next;
		count++;
	}
	printf("\ncount is %d:",count);
    
   
   //insertion at any position
   newnode=(struct node*)malloc(sizeof(struct node));
    int pos,i=1;

		printf("\nenter the data do you want to insert at any position:\n");
		scanf("%d",&newnode->data);

        printf("enter the position of data do you want to insert in DLL:\n");
        scanf("%d",&pos);

        tail=head;
        while(i<pos-1)
        {
            tail=tail->next;
            i++;
        }

        newnode->prev=tail;
        newnode->next=tail->next;
        tail->next->prev=newnode;
        tail->next=newnode;


     
     //display updated DLL
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

