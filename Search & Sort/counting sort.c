#include<stdio.h>

int main()
{
    int n,i,k = 0, A[15];
    
    printf("Enter the number of array : ");
    scanf("%d",&n);
    printf("\n\nEnter the elements :\n");
    for ( i = 1; i <= n; i++)
    {
         scanf("%d",&A[i]);
         if(A[i] > k)
         {
            k = A[i];
         }
    }
    Counting_sort(A, k, n);
    return 0;
}
 

int Counting_sort(int A[], int k, int n)
{
    int i, j;
    int B[15], C[100];
    for(i = 0; i <= k; i++)
            C[i] = 0;
    for(j =1; j <= n; j++)
            C[A[j]] = C[A[j]] + 1;
    for(i = 1; i <= k; i++)
            C[i] = C[i] + C[i-1];
    for(j = n; j >= 1; j--)
    {
            B[C[A[j]]] = A[j];
            C[A[j]] = C[A[j]] - 1;
    }
    printf("\nThe Sorted array is :\n");
    for(i = 1; i <= n; i++)
          printf("\t%d",B[i]);
}
 

