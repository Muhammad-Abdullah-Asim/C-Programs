#include<stdio.h>
int main()
{
	int member;
	int age;
	printf("Hello\n welcome to the event\nplease enter charecter for member or non member\nif member enter 1 else enter 0\n");
	scanf("%d",&member);
	printf("Enter your age=");
	scanf("%d",&age);
	if(member==1 && age>=65)
	printf("thankyou for your ptience\n you are a verified and a member of the club \n your ticket will be 5$\nthankyou");
	else if(member==1 && age<65)
	printf("thankyou for your ptience\n you are a verified and a member of the club \n your ticket will be 10$\nthankyou");
	else
	printf("thankyou for your ptience\n you are a verified and a non club member \n your ticket will be 20$\nthankyou");
	return 0;
}
