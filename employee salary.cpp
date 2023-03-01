#include<Stdio.h>
int main()
{
	int employee_id;
	int wrk_hrs;
	int salary_per_hr=15;
	int salary;
	printf("enter your employee's id:");
	scanf("%d", &employee_id);
	printf("enter the working hours:");
	scanf(" %d",&wrk_hrs);
	salary=wrk_hrs*salary_per_hr;
	printf("your salary=%d$",salary);
	return 0;
	
}

