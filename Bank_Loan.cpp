 // created and hand typed by
// Muhammad Abdullah Asim Himself
 #include<stdio.h>
 int main()
 {
 	float loan_needed;
 	float intrest_rate;
 	int count=0;
	 float monthly_payment;
 	//taking values from users for details
	 printf("enter the loan needed:");
 	scanf("%d",loan_needed);
 	//conditions to check the validity of loans
	 if(loan_needed<1000)
 	printf("this value is too low to give for a loan\nTry agin next time");
	else if(loan_needed>1000)
	{
	printf("enter the intrest rate min is 6 percent:");
 	scanf("%d",intrest_rate);
 	if(intrest_rate<6)
 	printf("to low intrest rate \ntry again later");
	 else if(intrest_rate>6)
	    {
	     printf("enter the monthly payment minimum is 25 per month:");
 	     scanf("%d",&monthly_payment);
 	     while(loan_needed<=0)
 	     {
 	     	//rates is the value that is their intrest rate when calculated every time after evey payment has been completed
 	    
 	        float rates=(intrest_rate/100)*loan_needed;
 	      // deduct here is the value that shows the money that needs to be deducted when  a monthly payment has been done to reduce the total loan beign paied monthly  
 	    float deduct=monthly_payment-rates;
 	    // here loan taken in the begining is beign modefied so that user is not giving in loans till his death....
		 loan_needed=loan_needed-deduct;
 	    //count here used to calculate the number of months once the loop breaks then the count will be the number of time loop ran which represent the months taken to pay off the loan with intrest 
		 count++;
		 if(loan_needed<=0)
		 break;
		 else
		 printf("");
		  }
		  printf("the numberof months required would be:%d",&count);
        }
        else
        printf("error\nExit (1)");
	}
    else
    printf("Error\nExit (1)");
    return 0;
 }
 // thankyou for using my code 
// if it had some logical error it was because if the time pressure 
// i am a good coder 
// i think maybe its up for you to decide 
