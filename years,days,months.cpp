#include<stdio.h>
#include<stdlib.h>
int main()
{
	int days;
	printf("enter the number if days:");
	scanf("%d",&days);
	int years=days/365;
	int rdays=days%365;
	int months=rdays/30;
        rdays=rdays%30;
	int weeks=rdays/7;
	 rdays=weeks%7;
	printf("years=%d\n",years);
	printf("months=%d\n",months);
	printf("weeks=%d\n",weeks);
	printf("days=%d\n",rdays);
	return 0;
}
