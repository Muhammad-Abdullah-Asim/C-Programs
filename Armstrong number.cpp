#include <stdio.h>

int main()
 {
  for (int num = 1; num < 1000; num++)
   {
    // Calculate the sum of the digits raised to the power of the number of digits
    int sum = 0;
    int temp = num;
    while (temp > 0) 
	{
      int digit = temp % 10;
      sum += digit * digit * digit;
      temp /= 10;
    }

    // If the sum is equal to the original number, it is an Armstrong number
    if (sum == num) 
	{
      printf("%d\n", num);
    }
  }

  return 0;
}

