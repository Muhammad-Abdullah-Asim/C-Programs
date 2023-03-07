#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int comp_rand_guess();
int main()
{
	int count_heads=0;
	int count_tails=0;
	int comp_guess;
	for(int i=0;i<100;i++)
	{
	comp_guess=comp_rand_guess();
	if(comp_guess==1)
	count_heads++;
	else
	count_tails++;
    }
    printf("the number of times that heads came:%d\n",count_heads);
    printf("the number of times that tails came :%d\n",count_tails);
	return 0;
	
}
int comp_rand_guess()
{
	
	int lower=1;
	int upper=2;
	int comp_guess;
	srand(time(NULL));
	comp_guess=rand()%(upper-lower+1)+lower;
	
	return comp_guess;
}
