#include<stdio.h>
int main()
{
	int distance;
	int average;
	int fuel;
	printf("enter the total distance traveled:");
	scanf("%d",&distance);
	printf("enter the fuel that were used:");
	scanf("%d",&fuel);
	average=distance/fuel;
	printf("%d",average);
	return 0;
}
