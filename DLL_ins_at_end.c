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


      
   //insertion at end
   newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the data do you want insert at end:\n");
		scanf("%d",&newnode->data);
        
    /*
        tail=head;
        newnode->next=0;
        //newnode->prev=tail;
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
        

     
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

    */

   newnode->next=0;
   tail=head;

   while(tail->next!=0)
   {
    tail=tail->next;
   }
   tail->next=newnode;
   newnode->prev=tail;

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
    
       

