/*Algorithm:
1.If head is NULL or there is only one element in the list then return (beacuse it's already sorted :p)

2.Else divide the linked list into two halves.(Let's say a & b)

3.Sort the two halves a & b

4. Merge the sorted a and b and update the head pointer.

Let's code now*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	
	};
	
	//protoytping the UDFs
	struct node* sortedmerge(struct node* a, struct node* b);
	void frontbacksplit(struct node* source, struct node** frontref, struct node** backref);
	  
	  void mergesort(struct node** headref)
	  {
	  	struct node* head = *headref;
	  	struct node* a;
	  	struct node* b;
	  	
	  	if((head==NULL)||(head->next==NULL))
	  	{
	  		return;
		  }
		  frontbacksplit(head, &a, &b);
		  
		  //recursively sort the two halves
		  mergesort(&a);
		  mergesort(&b);
		  
		  *headref=sortedmerge(a,b);
		  }
		  
	struct node* sortedmerge(struct node* a, struct node* b)
	{
		struct node* result = NULL;
		
		if(a==NULL)
		return(b);
		else if(b==NULL)
		return(a);
		
		if(a->data <= b->data)
		{
			result-a;
			result->next=sortedmerge(a->next, b);
		}
		else
		{
			result = b;
			result->next=sortedmerge(a, b->next);
			
		}
		return(result);
	}
	  
	  void frontbacksplit(struct node* source, struct node** frontref, struct node** backref)
	  {
	  	//I am using the fast and slow pointer strategy as slow one will move one node and fast one will ove 2 nodes at a time
	  	struct node* fast;
	  	struct node* slow;
	  	if(source==NULL || source->next==NULL)
		  {
		  	*frontref=source;
		  	*backref=NULL;
		  	
		  }
		  else
		  {
		  	slow=source;
		  	fast=source->next;
		  	
		  	while(fast!=NULL)
		  	{
		  		fast=fast->next;
		  		if(fast!=NULL)
		  		{
		  			slow=slow->next;
		  			fast=fast->next;
				  }
			  }
			  *frontref=source;
			  *backref=slow->next;
			  slow->next=NULL;
			  
		  }
	  }
	  
	  void printlist(struct node* node) //UDF tp print nodes in a given linked list
	  {
	  	while(node!=NULL)
	  	{
	  		printf("%d", node->data);
	  		node=node->next;
		  }
	  }
	  
	  void push(struct node** head_ref, int new_data)
	  {
	  	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	  	
	  	new_node->next=(*head_ref);
		  
		  (*head_ref)=new_node;
	}
		  
	  int main()
	  {
	  	struct node* res=NULL;
	  	struct node* a=NULL;
	  	
	  	//I am not making a menu for pushing data right now(maybe in the next commit). I am creating a linked list myself...
	  	push(&a, 105);
	  	push(&a, 23);
	  	push(&a, 4509);
	  	push(&a, -78);
	  	push(&a, 4501);
	  	push(&a, 67);
	  	
	  	mergesort(&a);
	  	
	  	printf("\n Sorted linked list list is: ");
	  	printlist(a);
	  	
	  	getchar();
	  	return 0;
	  	
	  }
