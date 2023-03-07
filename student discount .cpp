 #include<stdio.h>
int main()
{
	int customer_type;
    printf("choose\n");
    int choice;
    float total;
    float discount=0.2;
	printf("customer type--------index\n");
    printf("student----------------1\n");
    printf("non student------------2\n");
    scanf("%d",&customer_type);
	printf("select the product you want to buy\n\n");
	printf("PRODUCT-----------------------INDEX_KEY----PRICES\n\n");
	printf("Television------------------------1---------8,000\n");
	printf("Fridge----------------------------2--------25,000\n");
	printf("Playstation-----------------------3-------150,000\n");
	printf("Xbox------------------------------4--------90,000\n");
	printf("Phone-----------------------------5--------15,000\n");
	printf("Laptop----------------------------6--------95,000\n");
	scanf("%d",&choice);
    if(customer_type==1)
	{	
	  if(choice==1)
	   {
		printf("Bill\n");
		printf("Item---Television\n");
		total=discount*8000;
		total=8000-total;
		printf("the total bill is=%.2f",total);
	   }
	   else if(choice==2)
	   {
	   	printf("Bill\n");
		printf("Item---Fridge\n");
		total=discount*25000;
		total=25000-total;
		printf("the total bill is=%.2f",total);
	   }
	   else if(choice==3)
	   {
	   	printf("Bill\n");
		printf("Item---Playstation\n");
		total=discount*150000;
		total=1500000-total;
		printf("the total bill is=%.2f",total);
	   }
	   else if(choice==4)
	   {
	   	printf("Bill\n");
		printf("Item---Xbox \n");
			total=discount*90000;
		total=90000-total;
		printf("the total bill is=%.2f",total);
	   }
	   else if(choice==5)
	   {
	   	printf("Bill\n");
		printf("Item---Phone\n");
		total=discount*215000;
		total=15000-total;
		printf("the total bill is=%.2f",total);
	   }
	   else if(choice==6)
	   {
	   	printf("Bill\n");
		printf("Item---Laptop\n");
			total=discount*95000;
		total=95000-total;
		printf("the total bill is=%.2f",total);
	   }
	   else
	   printf("Error\nExit (1)");
	   
   }
   else if(customer_type==2)
	{	
	  if(choice==1)
	   {
		printf("Bill\n");
		printf("Item---Television\n");
		total=8000;
		printf("the total bill is=%d",total);
	   }
	   else if(choice==2)
	   {
	   	printf("Bill\n");
		printf("Item---Fridge\n");
		total=25000;
		printf("the total bill is=%d",total);
	   }
	   else if(choice==3)
	   {
	   	printf("Bill\n");
		printf("Item---Playstation\n");
		total=150000;
		printf("the total bill is=%d",total);
	   }
	   else if(choice==4)
	   {
	   	printf("Bill\n");
		printf("Item---Xbox \n");
		total=90000;
		printf("the total bill is=%d",total);
	   }
	   else if(choice==5)
	   {
	   	printf("Bill\n");
		printf("Item---Phone\n");
		total=15000;
		printf("the total bill is=%d",total);
	   }
	   else if(choice==6)
	   {
	   	printf("Bill\n");
		printf("Item---Laptop\n");
		total=90000;
		printf("the total bill is=%d",total);
	   }
	   else
	   printf("Error\nExit (1)");
   }
   else
	   printf("Error\nExit (1)");
	   return 0;
}
