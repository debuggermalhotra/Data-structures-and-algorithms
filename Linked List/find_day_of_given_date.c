/* A program to find day of a given date */
#include<stdio.h>
 
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
 
/* Driver function to test above function */
int main()
{
	int d,m,y;
	printf("Give me a date\n\n\n\n");
	printf("Enter the day: ");
	scanf("%d",&d);
	printf("\n\nEnter the month: ");
	scanf("%d",&m);
	printf("\n\nEnter the year: ");
	scanf("%d",&y);
	
    int day = dayofweek(d,m,y);
    printf("\n");
    if(day==0)
    printf("Sunday");
    if(day==1)
    printf("Monday");
    if(day==2)
    printf("Tuesday");
    if(day==3)
    printf("Wednesday");
    if(day==4)
    printf("Thursday");
    if(day==5)
    printf("Friday");
    if(day==6)
    printf("Sunday");
    
 
    return 0;
}
