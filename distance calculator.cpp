#include<stdio.h>
#include<math.h>
int main()
{
	int speed;
	int hours;
	int distance;
	printf("enter the speed that the vehical is moving:");
	scanf("%d",&speed);
	printf("enter the time that has ben traveled:");
	scanf("%d",&hours);
	distance=speed*hours;
	printf("the distance traveled by the vehical in %d hours is:%d",hours,distance);
	return 0;
}
