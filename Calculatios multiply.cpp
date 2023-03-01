// created and hand typed by
// Muhammad Abdullah Asim Himself
#include<stdio.h>
int multiply(int num,int length);
int main()
{
// initializing the variables 
	int num;
	int length;
	int answer;
	printf("enter the number you want multiplied:");
	scanf("%d",&num);
	printf("enter the number length of your number:");
	scanf("%d",&length);
// function calling for helping us out 	
	answer=multiply(num,length);
	printf("the answer is %d",&answer);
	return 0;
}
//  Function 
int multiply(int num,int length)
{
	int value=5;
	int final_value;
	if(length==1)
//using length for the loop run time 
// if statment used as loop is not good when running single time 
	final_value=num*value;
	else
	{
	for(int i=1;i<=length;i++)
// VALUE would be calculated in the case by multipling the 	
	{
		value=value*i;
	}
	final_value=num*value;
    }
	return final_value;
}
// thankyou for using my code 
// if it had some logical error it was because if the time pressure 
// i am a good coder 
// i think maybe its up for you to decide 
