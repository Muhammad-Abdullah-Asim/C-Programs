// C++ program to print primes smaller than n using
// Sieve of Sundaram.
#include <bits/stdc++.h>
using namespace std;

// Prototypes of the methods used
void SieveOfSundaram(bool marked[], int);
int Rotate(int);
int countDigits(int);

// Print all circular primes
void circularPrime(int n)
{
	// In general Sieve of Sundaram, produces primes smaller
	// than (2*x + 2) for a number given number x.
	// Since we want primes smaller than n, we reduce n to half
	int nNew = (n - 2) / 2;

	// This array is used to separate numbers of the form i+j+2ij
	// from others where 1 <= i <= j
	bool marked[nNew + 1];

	// Initialize all elements as not marked
	memset(marked, false, sizeof(marked));

	SieveOfSundaram(marked, nNew);

	// if n > 2 then 2 is also a circular prime
	cout << "2 ";

	// According to Sieve of sundaram If marked[i] is false
	// then 2*i + 1 is a prime number.

	// loop to check all prime numbers and their rotations
	for (int i = 1; i <= nNew; i++) {
		// Skip this number if not prime
		if (marked[i] == true)
			continue;

		int num = 2 * i + 1;
		num = Rotate(num); // function for rotation of prime

		// now we check for rotations of this prime number
		// if new rotation is prime check next rotation,
		// till new rotation becomes the actual prime number
		// and if new rotation if not prime then break
		while (num != 2 * i + 1) {
			if (num % 2 == 0) // check for even
				break;

			// if rotated number is prime then rotate
			// for next
			if (marked[(num - 1) / 2] == false)
				num = Rotate(num);
			else
				break;
		}

		// if checked number is circular prime print it
		if (num == (2 * i + 1))
			cout << num << " ";
	}
}

// Sieve of Sundaram for generating prime number
void SieveOfSundaram(bool marked[], int nNew)
{
	// Main logic of Sundaram. Mark all numbers of the
	// form i + j + 2ij as true where 1 <= i <= j
	for (int i = 1; i <= nNew; i++)
		for (int j = i; (i + j + 2 * i * j) <= nNew; j++)
			marked[i + j + 2 * i * j] = true;
}

// Rotate function to right rotate the number
int Rotate(int n)
{
	int rem = n % 10; // find unit place number
	rem *= pow(10, countDigits(n)); // to put unit place
	// number as first digit.
	n /= 10; // remove unit digit
	n += rem; // add first digit to rest
	return n;
}

// Function to find total number of digits
int countDigits(int n)
{
	int digit = 0;
	while (n /= 10)
		digit++;
	return digit;
}

// Driver program to test above
int main(void)
{
	int n = 100;
	circularPrime(n);
	return 0;
}

