#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int arr[1000];
	int die_1;
	int die_2;
	int lower=1;
	int upper=6;
	int sum;
	int i;
	int count=0;
	int count_2=0;
	int count_3=0;
	int count_4=0;
	int count_5=0;
	int count_6=0;
	int count_7=0;
	int count_8=0;
	int count_9=0;
	int count_10=0;
	int count_11=0;
	int count_12=0;	
	for(i=0;i<1000;i++)
	{
	    die_1=rand()%(upper-lower+1)+lower;
	    die_2=rand()%(upper-lower+1)+lower;
	    sum=die_1+die_2;
	    arr[i] = sum;
	    count=count+1;
	}
	for(i=0;i<1000;i++)
	{
		if(arr[i]==2)
		 count_2++;
		else if(arr[i]==3)
         count_3++;
		else if(arr[i]==4)
		 count_4++;
		else if(arr[i]==5)
		 count_5++;
		else if(arr[i]==6)
		 count_6++;
		else if(arr[i]==7)
		 count_7++;
		else if(arr[i]==8)
		 count_8++;
		else if(arr[i]==9)
		 count_9++;
		else if(arr[i]==10)
		 count_10++;
		else if(arr[i]==11)
		 count_11++;
		else
		count_12++;
	}
	printf("number 2 came %d times\nnuber 3 came %d times\nnumber 4 came %d times\nnumber 5 came %d times\nnumber 6 came %d times\nnumber 7 came %d times\nnumbr 8 came %d times\nnumber 9 came %d times\nnumber 10 came %d times\n number 11 came %d times\n number 12 came %d times",count_2,count_3,count_4,count_5,count_6,count_7,count_8,count_9,count_10,count_11,count_12);
	return 0;
}
