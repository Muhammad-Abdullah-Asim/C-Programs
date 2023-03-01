#include<stdio.h>
int main()
{
	float ocean_level;
	printf("enter the current ocean level in millimeters:");
	scanf("%d",&ocean_level);
	float increase_per_year=1.5;
	for(int i=0;i<25;i++)
	{
		ocean_level=ocean_level+1.5;
		printf("ocean level after %d year is:%.2f\n",i,ocean_level);
	}
	return 0;
}
