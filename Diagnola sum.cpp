#include<stdio.h>
int main()
{
 	int i;
	int j;
	int row;
	int column;
	int a[10][10];
	int Sum = 0;  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d",&i,&j);
 	printf("\n Please Enter the Elements \n");
 	for(row=0;row<i;row++)
  	{
   		for(column=0;column<j;column++)
    	{
      		scanf("%d", &a[row][column]);
    	}
  	}
 	for(row=0;row<i;row++)
  	{
   		Sum = Sum + a[row][row];
  	}
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );
 	return 0;
}
