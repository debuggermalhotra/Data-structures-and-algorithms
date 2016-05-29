#include<stdio.h>
 
#include<stdlib.h>
 
struct node
{
	int data;
	struct node *next;
 
}*head,*var,*trav;
 
 
void insert_at_begining(int value)
{
	var=(struct node*)malloc(sizeof(struct node));
	var->data=value;
 
	if(head==NULL)
	{
		head=var;
		head->next=NULL;
 
	}
	else
	{
		var->next=head;
		head=var;
 
	}
}
 
void insert_at_end(int value)
{
	struct node *temp;
	temp=head;
	var=(struct node *)malloc(sizeof(struct node));
	var->data=value;
	if(head==NULL)
	{
		head=var;
		head->next=NULL;
 
	}
	else
	{
		while(temp->next!=NULL)
    {
 
       temp=temp->next;
 
		}
		var->next=NULL;
		temp->next=var;
 
	}
}
 
void insert_at_middle(int value, int loc)
{
	struct node *var2,*temp;
	var=(struct node*)malloc(sizeof(struct node));
	var->data=value;
	temp=head;
 
	if(head==NULL)
	{
		head=var;
		head->next=NULL;
	}
	else
	{
		while(temp->data!=loc)
		{
			temp=temp->next;
		}
		var2=temp->next;
		temp->next=var;
		var->next=var2;
 
	}
}
 
int delete_from_middle(int value)
{
	struct node *temp, *var;
    temp=head;
    while(temp!=NULL)
    {
    	if(temp->data==value)
    	{
    		if(temp==head)
    		{
    			head=temp->next;
    			free(temp);
    			return(0);
 
			}
			else
			{
				var->next=temp->next;
				free(temp);
				return(0);
				}
		}
		else
		{
			var=temp;
			temp-temp->next;
		}
	}
	printf("\nData deleted from list is: %d",value);
 
}
 
int delete_from_end()
{
 
	struct node *temp;
	temp=head;
	while(temp->next!=NULL)
	{
		var=temp;
		temp=temp->next;
	}
	if(temp==head)
	{
		head=head->next;
		free(temp);
		return 0;
	}
	printf("Data deleted from list is",temp->data);
	var->next=NULL;
	free(temp);
	return 0;
}
 
void display()
{
	trav=head;
	if(trav==NULL)
	{
		printf("\nLIST IS EMPTY");
 
	}
	else
	{
		printf("Elements in the list: ");
		while(trav!=NULL)
		{
			printf("-> %d",trav->data);
			trav=trav->next;
		}
		printf("\n");
 
	}
}
 
int main()
{
	int i=0;
 
	printf("\nPress 1 for insertion at beginning of linked list");
	printf("\nPress 2 for insertion at end of linked list");
	printf("\nPress 3 for insertion at middle of linked list");
	printf("\nPress 4 for deletion from end of linked list");
	printf("\nPress 5 for deletion of any data of linked list");
	while(1)
	{
		printf("\nEnter your option: ");
		scanf("%d",&i);
 
		switch(i)
 {
 
		case 1:
			{
				int value;
				printf("\nEnter value to be inserted: ");
		        scanf("%d",&value);
		        insert_at_begining(value);
		        display();
		        break;
 
			}
			case 2:
			{
				int value;
				printf("\nEnter value to be inserted");
			    scanf("%d",&value);
			    insert_at_end(value);
			    display();
	            break;
			}
			case 3:
				{
					int value, loc;
					printf("\nAfter which data you want to insert the date?");
					scanf("%d",&loc);
					printf("\nEnter the value to be inserted: ");
					scanf("%d",&value);
					insert_at_middle(value, loc);
					display();
					break;
 
				}
				case 4:
					{
						delete_from_end();
						display();
						break;
					}
					case 5:
						{
							int value;
							display();
							printf("\nEnter the data you want to delete from the list");
							scanf("%d",&value);
							delete_from_middle(value);
							display();
							break;
						}
						case 6:
							{
							exit(0);
							}
	}                   
 
return 0;	
}
}
