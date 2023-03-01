#include<stdio.h>
#include<math.h>
int main()
{
	int inpin;
	int pin;
	float amount=1000;
	float cash;
	float deposit;
	printf("initialize a 4 digit pin of your choice:");
	scanf("%d",&inpin);
	int length= log10(inpin)+1;
	if(length==4)
	{
		printf("Enter your previous pin to authorize access:");
		scanf("%d",&pin);
		if(inpin==pin)
		{
			int choice;
			printf("choose your desired function\n");
			printf("Type------------------------INDEX\n\n");
			printf("Balance inquiries-------------1\n");
			printf("Cash Withdrawl----------------2\n");
			printf("Cash deposit------------------3\n");
			printf("use the index keys and enter a number:");
			scanf("%d",&choice);
			if(choice==1)
			{
				printf("you have choosen Balance Inquiries\nyour current balance is %.2f",cash);
			}
			else if(choice==2)
			{
				int withd;
				printf("you have choosen cash withdrawl\nEnter the amount you want to withdraw:");
				scanf("%d",&withd);
				if(withd<=cash)
				{
					printf("your request has been accepted\nthankyou for using our bank");
				}
				else if(withd>cash)
				{
					printf("Error\nNot ensufficient funds");
					
				}
				else
				printf("Error\nExit(1)");
				
			}
			else if(choice==3)
			{
				printf("you have choosen Cash deposit\nEnter the amount you want to deposit;");
				scanf("%d",&deposit);
				cash=amount+deposit;
				printf("your new balnce is:%.2f",cash);
				
			}
			else
			printf("Error\nExit(1)");
		}
		else if(inpin!=pin)
		{
			printf("Error\nWrong pin was entered\nTry again");
			
		}
		else
		printf("Error\nExit(1)");
	}
	else
	printf("Error\nExit(1)");
	
	return 0;
}
