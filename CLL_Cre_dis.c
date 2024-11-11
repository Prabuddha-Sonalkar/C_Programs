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
		temp->next=head;
		printf("Do you want to continue(0,1)?:\n");
		scanf("%d",&choice);
	}
	
	//display
    if(head==0)
    {
        printf("\n list is empty:");
    }
    else
    {
	temp=head;
    printf("Data present in circular linked list:\n");
	while(temp->next!=head)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
   
    printf("%d",temp->data);
    printf("\nTo check creation of circular LL we print data of first node:");
    printf("\n%d\t",temp->next->data);
    }

}