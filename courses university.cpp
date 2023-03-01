#include <stdio.h>
int main()
{
	int courses;
	printf("Enter the number of courses you have:");
	scanf("%d",&courses);
	int credit_hours[sizeof(courses)];
	char grades_scored[sizeof(courses)];
	for(int i=1;i<=courses;i++)
	{
		printf("enter your grade in course no.%d:",i);
		scanf("%1s", &grades_scored[i]);
		printf("enter the credit hours of course no.%d:",i);
		scanf("%d",&credit_hours[i]);
		
	}
	for(int i=1;i<=courses;i++)
	{
		printf("grade for %d course=%c\ncredit hour for %d course=%d",i,grades_scored[i],i,credit_hours);
	}
	return 0;
}
