#include<stdio.h>

double _Average_(int *arr,int size);

int main()
{
int array[5]={2000,1000,500,250,125};
double avg;
avg=_Average_(array,5);

printf("Average of the numbers is: %f",avg);
return 0;
}

double _Average_(int *arr,int size)
{
int i,sum=0;
double avg;

for(i=0;i<size;i++)
{
sum+=arr[i];
}
avg=sum/size;

return avg;
}
