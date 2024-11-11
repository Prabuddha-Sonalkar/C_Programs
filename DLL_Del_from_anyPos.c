#include<stdio.h>
#include<stdlib.h>

int main(){

	
	struct node
	{
		int data;
		struct node *next;
        struct node *prev;
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
        	
        newnode->prev=0;
		newnode->next=0;
		
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
            newnode->prev=temp;
			temp=newnode;
		}
		
		printf("Do you want to continue(0,1)?:\n");
		scanf("%d",&choice);
	}
    

 
	//display
	temp=head;
    printf("Data present in doubly linked list:\n");
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\ncount is %d:",count);

    //deletion from any position
   
    int pos, i=1;
    temp=head;
    printf("\nenter the position:\n");
    scanf("%d",&pos);

    while(i<pos)
    {
        temp=temp->next;
        i++;
    }

    
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);


    //display updated DLL
	temp=head;
    printf("\nData present in doubly linked list after deletion from any position:\n");
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
    count--;
	printf("\ncount is %d:",count);


}

 