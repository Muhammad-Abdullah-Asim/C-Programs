#include<stdio.h>
void towers(int,char,char,char);
int main()
{
	towers(3,'A','C','B');
	return 0;
}
void towers(int n,char source,char dest,char auxiliary)
{
	static int step=0;
	printf("towers(%d,%c,%c,%c)\n",n,source,dest,auxiliary);
	if(n==1)
	printf("\t\t\t\tstep %3d:mover from %c\n",++step,source,dest);
	else
	{
		towers(n-1,source,auxiliary,dest);
		printf("\t\t\t\tstep %3d:move from %c to %c\n",++step,source,dest);
		towers(n-1,auxiliary,dest,source);
	}
	return ;
}
