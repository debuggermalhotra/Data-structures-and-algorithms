#include<stdio.h>
 
#include<conio.h>
 
#define size 5
 
int stack[size];
 
int top;
 

void main()
 
{
 
	char ch,ch1;
 
	ch ='y';
 
	ch1='y';
 
	top=-1;
 
	
 
	while(ch!='n')
 
	{
 
		push();
 
		printf("\n\n Do you want to push more items in stack? (y/n):") ;
 
		ch=getch();
 
	}
 
	display();
 
	while(ch1!='n')
 
	{
 
		printf("\n\n Do you want to delete  any item in stack y/n");
 
		ch1=getch();
 
		pop();
 
	}
 
	display();
 
	getch();
 
}

void push()         //function to add an element in stack
 
{
 
	int n;
 
	printf("\n\n Enter item in stack: ");
 
	scanf("%d",&n);
 
	if(top==size-1)
 
	{
 
		printf("\n\nStack is Full"); //overflow condition
 
	}
 
	else
 
	{
 
		top=top+1;
 
		stack[top]=n;
 
	}
 
}
 
void pop()
 
{
 
	int item;
 
	if(top==-1)
 
	{
 
		printf("\n Stack is empty");    //Underfolw condition
 
	}
 
	else
 
	{
 
		item=stack[top];
 
		printf("\n Item popped: %d", item);
 
		top--;
 
	}
 
}
 
void display()
 
{
 
	int i;
 
	printf("\n\n\n\n\n Here is your stack: ");
 
	for(i=top; i>=0; i--)
 
	printf("\n %d", stack[i]);
 
}


