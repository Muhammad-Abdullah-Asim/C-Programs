#include<stdio.h>
#include<math.h>
int main()
{
	int num1;
	int num2;
	int product;
	int sum;
	int subtraction;
	int division;
	int choice;
	int remainder;
	printf("enter the calculation you want to perform\n");
	printf("product-----------------------------------1\n");
	printf("Sum---------------------------------------2\n");
	printf("subtraction-------------------------------3\n");
	scanf("%d",choice);
	if(choice==1)
	{
		printf("you chose product\n");
		product=num1*NUM2;
	    printf("the product of given integers is: %d",product);
	    
	}
	else if(choice==2)
	{
		printf("you chose Sum\n");
		sum=num1+num2;
		printf("the sum of given integers is: %d",sum);
		
	}
	else if(choice==3)
	{
		printf("you chose subtraction\n");
		subtraction=num1-num2;
		printf("the subtraction of given integers is: %d");
	}
	else if(choice==4)
	{
		printf("you chose division\n");
		division=num1/num2;
		remainder=num1%num2;
		printf("the divion of given integers is: %d\nThe remainder is: %d",division,remainder);
	}
	else
	printf("error\nExit (1)");
	
	return 0;
}
