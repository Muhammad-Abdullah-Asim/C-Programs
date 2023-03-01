#include<stdio.h>
int even_odd(int number);
int main()
{
	int number;
	printf("enter the number to check even_odd:");
	scanf("%d",&number);
	int n=even_odd(number);
    if(n==1)
    printf("the number is even");
    else
    printf("the number is odd");
	return 0;
}
int even_odd(int number)
{
	int num;
	if(number%2==0)
	return 1;
	else
	return 0;
}
