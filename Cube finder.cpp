#include<stdio.h>
int main()
{
	int limit;
	int cube;
	printf("enter the limit till you want to run it:");
	scanf("%d",&limit);
	for(int i=1;i<=limit;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",cube);
			cube=i*i;
		}
		printf("\n");
	}
	return 0;
}
