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


//insertion at end
    newnode=(struct node*)malloc(sizeof(struct node));
		
    printf("\n");    
    printf("enter data you want to insert:\n");
	scanf("%d",&newnode->data);

    newnode->next=0;
    temp=head;

    while(temp->next!=0)
    {
        temp=temp->next;
    } 

    temp->next=newnode;

 
	//display updated LL
	temp=head;
    printf("Updated linked list after insertion at end:\n");
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
        
	}
    count++;
    printf("\ncount is %d:",count);

}