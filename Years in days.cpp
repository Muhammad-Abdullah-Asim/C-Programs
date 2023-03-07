#include<stdio.h>
#include<math.h>
int main()
{
	int days;
	int weeks;
	int years;
	int rdays;
	printf("enter the number of days:");
	scanf("%d",&days);
	years=days/365;
	rdays=days%365;
	weeks=rdays/7;
	rdays=rdays%7;
	printf("\nIn %d days:",days);
	printf("\n the number of years are:", years);
	printf("\nthe number of weeks are:", weeks);
	printf("\nthe number of remaining days are:", rdays);
}
