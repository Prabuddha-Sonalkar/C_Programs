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
	
    //display LL
	temp=head;
    printf("Data present in linked list:\n");
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\ncount is %d:",count);

    
    // insertion at any position
    newnode=(struct node*)malloc(sizeof(struct node));

    int pos,i=1; 
    printf("\nenter the position:\n");
    scanf("%d",&pos);

    if(pos>count)
    {
        printf("Invalid position:\n");
    }
    else
    {
        temp=head;
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }

    }

    printf("enter the data:\n");
    scanf("%d",&newnode->data);

    newnode->next=temp->next;
    temp->next=newnode;

//display updated LL
	temp=head;
    printf("Data present in linked list:\n");
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		
	}
    count++;
	printf("\ncount is %d:",count);


}