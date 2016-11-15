#include<stdio.h>

int max(int a,int b)
{
	return(a>b) ? a : b;
}

int knapsack(int cap,int wt[],int val[],int n)
{
	int i,w;
	int k[n+1][cap+1];
	
	for(i=0;i<=n;i++)
	{
		for(cap=0;w<=cap;w++){
			if(i==0||w==0)
			k[i][w]=0;
			else if(wt[i-1]<=w)
			k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],k[i-1][w]);
			else
			k[i][w]=k[i-1][w];
		}
	}
	return k[n][cap];
}

int main()
{
int i,n,val[20],wt[20],cap;

printf("Enter number of items: ");
scanf("%d",&n);
printf("\nEnter values and weights of the items: ");
for(i=0;i<n;i++)
{
	scanf("%d %d",&val[i],&wt[i]);
}
printf("\nEnter size of knapsack: ");
scanf("%d",&cap);
printf("\n\n");

printf("%d",knapsack(cap,wt,val,n));

return 0;

}


	 
