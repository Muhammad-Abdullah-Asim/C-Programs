#include<stdio.h>
int age_check(int age);
int main()
{
	int age;
	printf("enter your age to check if your valid to cast a vote:");
	scanf("%d",&age);
	age=age_check(age);
	if(age==1)
	printf("your are old enought to cast a vote");
	else
	printf("your are not old enought to cast a vote");
	return 0;
}
int age_check(int age)
{
	int x;
	if(18<=age)
	return 1;
	else
	return 0;
}
