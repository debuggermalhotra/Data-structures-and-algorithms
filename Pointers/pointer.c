#include<stdio.h>
void main()
{
int variable=100;
int *pointer;

pointer= &variable;

printf("The address of 'variable' is: %d", &variable);
printf("\n The adress stored in 'pointer' is: %d", pointer);
printf("\nThe value of *pointer is: %d", *pointer);
}
