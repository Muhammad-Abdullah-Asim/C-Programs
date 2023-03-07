#include<stdio.h>
int main()
{
	int array[6];
	printf("enter 6 values in the array to swap the values\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&array[i]);
	}
	int temp;
	temp=array[0];
	array[0]=array[5];
	array[5]=temp;
	temp=array[1];
	array[1]=array[4];
	array[4]=temp;
	temp=array[2];
	array[2]=array[3];
	array[3]=temp;
	printf("the swaped array is :");
	for(int i=0;i<6;i++)
	{
		printf(" %d ",array[i]);
	}
	return 0;
}
