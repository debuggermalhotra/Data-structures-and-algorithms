#include<stdio.h>

int partition(int A[],int low, int high);
void quicksort(int A[],int low, int high);


int A[50],n,i,p,pivot,j,temp;
int main()
{



    printf("Enter the size of array: ");
    scanf("%d",&n);


    printf("\nEnter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }
quicksort(A, 0, (n-1));
printf("\nSorted array is: ");
for(i=0;i<n;i++)
printf("%d ",A[i]);
return 0;
}

int partition(int A[],int low, int high)
{
pivot=A[high];
i=low;
for(j = low;j < high;j++)
if(A[j] <= pivot)
{
	temp=A[j];
	A[j]=A[i];
	A[i]=temp;

i = i + 1;

}
temp=A[i];
A[i]=A[high];
A[high]=temp;
return i;




}

void quicksort(int A[],int low, int high)
{
	
if(low<high)
{
p=partition(A,low,high);
quicksort(A,low,p-1);
quicksort(A,p+1,high);

}
}
