#include<stdio.h>;
int main()
{
	int s,z=0;
	int x,y=0;
	printf("Enter the size of first arary\n");
	scanf("%d %d",&s,&z);
	int array1[s][z];
	printf("Enter the size of second array:");
	scanf("%d %d",&x,&y);
	int array2[x][y];
	for(int i=0;i<s;i++)
	{
		for(int j=0;j<z;j++)
		{
			printf("Enter the value of array1[%d][%d]:",i,j);
			scanf("%d",array1[i][j]);
		}
	}
	
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			printf("Enter the value of array1[%d][%d]:",i,j);
			scanf("%d",array2[i][j]);
		}
	}
	
	for(int i=0;i<s;i++)
	{
		printf("\n");
		for(int j=0;j<z;j++)
		{
			printf("Enter the value of array1 are : %d",array1[i][j]);
		}
	}
	
	for(int i=0;i<s;i++)
	{
		printf("\n");
		for(int j=0;j<z;j++)
		{
			printf("Enter the value of array1 are : %d",array2[i][j]);
		}
	}
	
	return 0;
}
