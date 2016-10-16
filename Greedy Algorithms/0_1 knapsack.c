#include<stdio.h>

void Knapsack(int num, float weight[],  float profit[], float capacity)
{
float x[20], tp=0;
int i,u;

u=capacity;

for(i=1;i<=num;i++)
{
  x[i]=0.0;
  }

for(i=1;i<=num;i++)
{
  if(weight[i]>u)
  break;
  else
  {
    x[i]=1.0;
    tp+=profit[i];
    u-=weight[i];
  }
}
if(i<num)
x[i]=u/weight[i];

tp=tp+(x[i]*profit[i]);

for(i=1;i<=num;i++)
{
  printf("%f\t",x[i]);

  }
  printf("\nMaximum profit is: %f",tp);

}

int main()
{
  float weight[20],profit[20],capacity;
  int num,i,j;
  float ratio[20],temp;

  printf("Enter the number of objects: ");
  scanf("%d",&num);
  printf("\nEnter the  weights and profits of each object");
  for(i=1;i<=num;i++)
  {
  printf("\nWeight of Object %d: ",i);
  scanf("%f",&weight[i]);
  printf("\nProfit of object %d: ",i);
  scanf("%f",&profit[i]);
  }
  printf("\nEnter the capacity of Knapsack: ");
  scanf("%f",&capacity);

  for(i=1;i<=num;i++)
  {
    ratio[i]=profit[i]/weight[i];

  }

  for(i=1;i<=num;i++)
  {
   for(j=i+1;j<=num;j++)
   {
     if(ratio[i]<ratio[j])
     {
       temp=ratio[j];
       ratio[j]=ratio[i];
       ratio[i]=temp;

       temp=weight[j];
       weight[j]=weight[i];
       weight[i]=temp;

       temp=profit[j];
       profit[j]=profit[i];
       profit[i]=temp;
      }
     }
   }
   Knapsack(num,weight,profit,capacity);
   return 0;
}
