//
// Created by chetan on 7/8/16.
//
#include<stdio.h>

void bsort_ascending(int A[],int n);
void bsort_descending(int A[],int n);
void binarysearch(int array[], int n);

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
    printf("\nPress 1 to perform bubble sort in ascending order");
    printf("\nPress 2 to perform bubble sort in descending order");
    printf("\nPress 3 to perform binary search\n");
    scanf("%d",&option);
    switch(option) {
        case 1:
            bsort_ascending(array,n);
            
            break;
        case 2:
            bsort_descending(array,n);
            break;

        case 3:
            binarysearch(array,n);
            break;
        default:
            printf("\nYou entered an invalid option");
            
            
    }
     
    return 0;
}

void bsort_ascending(int array[],int n)
{
    int i,j,temp;

    for (i = 0; i < (n-1); i++) {
        for (j = 0; j < n - i - 1; j++) {

            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                
                printf("\nSorted array is: ");
                        for(i=0;i<n;i++){
                            printf("%d ",array[i]);
						}

               
            }
        }
    }
}

void bsort_descending(int array[],int n){
    int i,j,temp;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {

            if(array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                
                printf("\nSorted array is: ");
                        for(i=0;i<n;i++){
                            printf("%d ",array[i]);
						}

               
            }
        }
    }
}

void binarysearch(int array[], int n){
	
	int search, first, last, middle;
	printf("\nEnter the element to be searched:  ");
	scanf("%d",&search);
	first = 0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
	if(array[middle]<search)
	{
		first=middle+1;
	}
	else if(array[middle]==search)
	{
		printf("\n%d found at location %d",search,middle+1);
		break;
	}
	else
	{
	 last=middle-1;
	 middle=(first+last)/2;
	}
}
	if(first>last)
	printf("\nNot found!! %d is not present in the list",search);
}
	
