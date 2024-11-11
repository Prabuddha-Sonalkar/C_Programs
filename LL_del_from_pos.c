#include<stdio.h>
#include<stdlib.h>

int main(){
	
	struct node
	{
		int data;
		struct node *next;
	};
	
	
	struct node *head,*newnode,*temp;
	head=0;
	int choice;
	int count=0;
	
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
		printf("Do yo want to continue(0,1)?:\n");
		scanf("%d",&choice);
	}
	
	
   //display
	temp=head;
    printf("Data present in linked list:\n");
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\ncount is %d:",count);


//deletion from any position
    
   struct node *nextnode;
   int pos,i=1;
   temp=head; 

   printf("\nenter the position for deletion:\n");
   scanf("%d",&pos);
   while(i<pos-1)
   {
    temp=temp->next;
    i++;
   }
   nextnode=temp->next;
   temp->next=nextnode->next;
   free(nextnode);
    


	//display updated LL
	temp=head;
    printf("\nUpdated linked list after deletion from any position:\n");
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;

	}
    count--;
	
	printf("\ncount is %d:",count);
    
}