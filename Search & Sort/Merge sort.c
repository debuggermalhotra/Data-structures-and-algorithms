#include<stdio.h>

void merge(int array[],int l,int m,int h);
void merge_sort(int array[],int low,int high);
int array[100];

int main()
{
  int n,i;

  printf("Enter the size of array: ");  // input the elements
  scanf("%d",&n);
  printf("\nEnter the elements: ");
  for(i=0; i<n; i++)
    scanf("%d",&array[i]);

  merge_sort(array,0,n-1);

  printf("Sorted array is: ");
  for(i=0; i<n; i++)
    printf("%d ",array[i]);

  return 0;
}

void merge_sort(int array[],int low,int high)
{
  int mid;
  if(low<high) {
    mid=(low+high)/2;

    merge_sort(array,low,mid);
    merge_sort(array,mid+1,high);

    merge(array,low,mid,high);
  }


}

void merge(int array[],int l,int m,int h)
{
  int array1[10],array2[10],n1,n2,i,j,k;


  n1=m-l+1;
  n2=h-m;

  for(i=0; i<n1; i++)
    array1[i]=array[l+i];
  for(j=0; j<n2; j++)
    array2[j]=array[m+j+1];

  array1[i]=9999;  // To mark the end of each temporary array
  array2[j]=9999;

  i=0;
  j=0;
  for(k=l; k<=h; k++) { //process of combining two sorted array
    if(array1[i]<=array2[j])
      array[k]=array1[i++];
    else
      array[k]=array2[j++];
  }

}
