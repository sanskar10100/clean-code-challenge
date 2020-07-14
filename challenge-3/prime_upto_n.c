/*
* C Program to print all the prime numbers upto a
* input maximum.
* Input constraint: Between 10 and 1000 (inclusive)
*/

#include <stdio.h>
#include <math.h>

// Return true if parameter number is prime
int is_prime(int check_number);

// Prints all primes upto given max_bound.
int print_primes(int max_bound);

// Driver code
int main()
{
	int max_num;

	// Iterate until input constraint satisfied
	do
	{
		printf("Input: ");
		scanf("%d", &max_num);
	} while (max_num < 10 || max_num > 1000);

	// Print all the primes upto max_num
	print_primes(max_num);

	return 0;
}

// Print speace seperated primes upto max_bound
int print_primes(int max_bound)
{
	// Print all the primes from 2 to max_bound
	for (int num = 2; num <= max_bound; num++)
	{
		if (is_prime(num))
		{
			printf("%d ", num);
		}
	}

	printf("\n");
}

// Return true if parameter is prime
int is_prime(int check_number)
{
	for (int divisor = 2; divisor <= sqrt(check_number); divisor++)
	{
		// If number has any divisors between 2, and
		// square root of that number, it's not prime
		if (check_number % divisor == 0)
		{
			return 0;
		}
	}

	// Return true if no divisors found
	return 1;
}


