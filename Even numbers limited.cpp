#include<Stdio.h>
int main()
{
	int limit;
	int x=2;
	printf("this program is to print even numbers till a given number\n");
	printf("enter the limit till you want the even numbers:");
	scanf("%d",&limit);
	for(int i=1;i<=limit;i++)
	{
		printf("even number %d=%d\n",i,x);
		x=x+2;
	}
	return 0;
}
