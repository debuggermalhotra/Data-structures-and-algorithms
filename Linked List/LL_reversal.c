//C program to reverse a linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int num;
	struct node *next;
};
void create(struct node **); //creats linked list
void reverse(struct node **); //reverses the linked list
void release(struct node **); //releases after displaying the linked list
void display(struct node *); //displays the linked list

void main()
{
	struct node *p=NULL;

	printf("Enter data into the lsit: ");
	create(&p);
	printf("\nThe list is: ");
	display(p);
	printf("\nReversing the list. .......\n\n");
	reverse(&p);
	printf("\nThe list is: ");
	display(p);
	release(&p);
	
}

void reverse(struct node **head)
{
	struct node *p,*q,*r;
	
	p=q=r=*head;
	p=p->next->next;
	q=q->next;
	r->next=NULL;
	q->next=r;
	
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
*head=q;
}

void create(struct node **head)
{
	int c,ch;
	struct node *temp, *rear;
	
	do
	{
		printf("\nEnter number: ");
		scanf("%d",&c);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->num=c;
		temp->next=NULL;
		if(*head==NULL)
		{
			*head=temp;
		}
		else
		{
		  rear->next=temp;
		  	
		}
		rear=temp;
		printf("\nDo you wish to conitnue?(1/0)")	;	
	    scanf("%d",&ch);
	    
	}
	while(ch!=0);
	printf("\n");
	
	void display(struct node *p)
	{
		while(p!=NULL)
		{
			printf("%d\t",p->num);
			p=p->next;
		}
		printf("\n");
	}
	
	void release(struct node **head)
	{
		struct node *temp=*head;
		*head=(*head)->next;
		while((*head) != NULL)
		{
			free(temp);
			temp=*head;
			(*head)=(*head)->next;
		}
			}
	
	
}


