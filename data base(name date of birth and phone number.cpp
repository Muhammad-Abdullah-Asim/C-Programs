#include<stdio.h>
int main()
{
	char string[100];
	int array1[3];
	long long int number;
	int i=0;
	printf("enter your name:\n");
	fgets(string,100,stdin);
	printf("enter your date of birth in numbers:\n");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&array1[i]);
	 } 
	 printf("enter your phone number:");
	 scanf("%d",&number);
	 printf("\n\n");
	 puts(string);
	 for(int i=0;i<3;i++)
	 {
	 	printf("%d / ",array1[i]);
	 }
	 printf("\n%d",number);
	 
	 
	 
	 return 0;
}
