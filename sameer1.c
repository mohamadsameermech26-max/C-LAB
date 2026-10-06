#include<stdio.h>
void main()
{
int year;
printf("Enter the year (YYYY): ");
scanf("%d",&year);
if(year%4==0&& year%100!=0||year%400==0)
printf("\nthe given year %d is a leap year.", year);
else
   printf("\nthe given year %d is not a leap year",year);
 } 
    