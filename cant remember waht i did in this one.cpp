#include<stdio.h>
int main()
{
	int rows1;
	int coloum1;
	int rows2;
	int coloum2;
	int i,j;
	printf("enter the rows of first matrix;");
	scanf("%d",&rows1);
	printf("enter the coloums in first matrix:");
	scanf("%d",&coloum1);
	printf("enter the rows of second matrix;");
	scanf("%d",&rows2);
	printf("enter the coloum of second matrix;");
	scanf("%d",&coloum2);
	int matrix1[rows1][coloum1];
	int matrix2[rows2][coloum2];
	int matrix3[i][j];
	if(rows1!=rows2)
	{
		printf("Error\nExit (1)");
	}
	else
	{
	for(i=0;i<rows1;i++)
	 {
		for(j=0;j<coloum1;j++)
		{
			printf("enter integer for %d row %d coloum of first matrix:",i,j);
			scanf("%d",&matrix1[i][j]);
		}
	 }
	for(i=0;i<rows1;i++)
	 { 
		for(j=0;j<coloum1;j++)
		{
			printf("enter integer for %d row %d coloum of second matrix:",i,j);
			scanf(" %d",&matrix2[i][j]);
		}
	 }
	for(i=0;i<rows1;i++)
	 { 
		for(j=0;j<coloum1;j++)
		{
			matrix3[i][j]=matrix1[i][j]*matrix2[j][i]+matrix1[i][j]*matrix2[j][i];
			printf("%d\n",matrix3[i][j]);
		}
	 }
    }
}
