
//
// Created by chetan on 8/8/16.
//
#include<stdio.h>
void isort_ascending(int A[],int n);
void isort_descending(int A[],int n);
void linearsearch(int array[], int n);

int main()
 {
    int array[100],n,i,option;

    printf("Enter the size of array: ");
    scanf("%d",&n);


    printf("\nEnter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nPress 1 to perform insertion sort in ascending order");
    printf("\nPress 2 to perform insertion sort in descending order");
    printf("\nPress 3 to perform linear search\n");
    scanf("%d",&option);
    switch(option) {
        case 1:
           isort_ascending(array,n);

            break;
        case 2:
            isort_descending(array,n);
            break;

        case 3:
            linearsearch(array,n);
            break;
        default:
            printf("\nYou entered an invalid option");


    }

    return 0;
}

void isort_ascending(int array[],int n)
{
    int i,j,temp;


  for(i=1;i<n;i++)
  {
      temp=array[i];
      j=i-1;
      while((temp<array[j])&&(j>=0))
      {
      array[j+1]=array[j];
          j=j-1;
      }
      array[j+1]=temp;
  }

    printf("\nSorted list in ascending order is: ");
    for(i=0;i<n;i++)
    printf("%d  ",array[i]);
    }



void isort_descending(int array[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
  {
      temp=array[i];
      j=i-1;
      while((temp>array[j])&&(j>=0)){
      array[j+1]=array[j];
          j=j-1;
      }
      array[j+1]=temp;
  }
    printf("\nSorted list in ascending order is: ");
    for(i=0;i<n;i++)
    printf("%d  ",array[i]);


}

void linearsearch(int array[], int n)
{
	int search , i;
	printf("\nEnter the element to be searched: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
	if(search==array[i])
	{
	printf("\n%d found at location %d",search,i+1);
	break;
	}
	if(i==n)
	{
	printf("\n%d is not present in the list!!",search);
	}
	}
}
