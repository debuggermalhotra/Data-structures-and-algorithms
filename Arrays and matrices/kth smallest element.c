#include<stdio.h>


void sort(int a[],int n)
{
    int i,j,temp;


  for(i=1;i<n;i++)
  {
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0))
      {
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
  }
}

int main()
{
int n,i,k;
printf("\t\tPROGRAM   TO FIND Kth SMALLEST element\n\n\n\n");
printf("Enter te size of array: ");
scanf("%d",&n);
int a[n];
printf("\nEnter the array elements: ");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("\nEnter the value of k: ");
scanf("%d",&k);

sort(a,n);

printf("\nThe elemented you wanted is: %d",a[k]);

return 0;
}
