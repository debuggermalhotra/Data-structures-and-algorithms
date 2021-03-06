#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#define bool int

struct sNode
{
   char data;
   struct sNode *next;
};
 

void push(struct sNode** top_ref, int new_data); //UDF to push an item to stack

int pop(struct sNode** top_ref);  //UDFto pop an item from stack
 

bool isMatchingPair(char character1, char character2)
{
   if (character1 == '(' && character2 == ')')
     return 1;
   else if (character1 == '{' && character2 == '}')
     return 1;
   else if (character1 == '[' && character2 == ']')
     return 1;
   else
     return 0;
}
 

bool areParenthesisBalanced(char exp[])
{
   int i = 0;
 
   
   struct sNode *stack = NULL;
 
  // Traverse the given expression to check matching parenthesis 
   while (exp[i])
   {
  
      if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
        push(&stack, exp[i]);
 
    
      if (exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
      {
             
        
         if (stack == NULL)
           return 0; 
 
        
         else if ( !isMatchingPair(pop(&stack), exp[i]) )
           return 0;
      }
      i++;
   }
    

   if (stack == NULL)
     return 1; 
   else
     return 0;  
} 
 

int main()
{
  char exp[100] = "{]])}}()";
  printf("Let's check for balanced parenthesis..... ");
  sleep(5);
  printf("\n\n\n\nEnter the expression: ");
  scanf("%s", &exp);
  
  if (areParenthesisBalanced(exp))
    printf("\n\n Balanced ");
  else
    printf("\n\n Not Balanced ");  
  return 0;
}    
 
 
void push(struct sNode** top_ref, int new_data) //UDF to push an item to stack
{
  /* allocate node */
  struct sNode* new_node =
            (struct sNode*) malloc(sizeof(struct sNode));
 
  if (new_node == NULL)
  {
     printf("Stack overflow \n");
     getchar();
     exit(0);
  }           
 
  
  new_node->data  = new_data;
 

  new_node->next = (*top_ref);  
 

  (*top_ref)    = new_node;
}
 

int pop(struct sNode** top_ref)    // UDF to pop an item from stack
{
  char res;
  struct sNode *top;
 
 
  if (*top_ref == NULL)
  {
     printf("Stack overflow \n");
     getchar();
     exit(0);
  }
  else
  {
     top = *top_ref;
     res = top->data;
     *top_ref = top->next;
     free(top);
     return res;
  }
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
