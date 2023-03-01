#include<stdio.h>
int main()
{
	int amount;
	printf("enter the amount in rupeese:");
	scanf("%d",&amount);
	int note1=amount/5000;
	printf("\n5000 bills required=%d\n",note1);
	amount =amount-(note1*5000);
	int note2=amount/1000;
	printf("1000 bills required=%d\n",note2);
	amount =amount-(note2*1000);
	int note3=amount/500;
	printf("500 bills required=%d\n",note3);
	amount=amount-(note3*500);
	int note4=amount/100;
	printf("100 bills required=%d\n",note4);
	amount=amount-(note4*100);
	int note5=amount/50;
	printf("50 bills required=%d\n",note5);
	amount=amount-(note5*50);
	int note6=amount/20;
	printf("20 bills required=%d\n",note6);
	amount=amount-(note6*20);
	int note7=amount/10;
	printf("10 bills required=%d\n",note7);
	amount=amount-(note7*10);
	int note8=amount/5;
	printf("5 bills required=%d\n",note8);
	return  0;
	
}
