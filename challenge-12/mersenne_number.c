/* 
* C Program to check whether a number mersennne
* number or not
* Input Constraint: 0 < Input < 15001
*/

#include <stdio.h>
#include <math.h>

// Returns true if param is prime
int is_prime(int number);

// Returns true if param is mersenne number
int is_mersenne(int check_num);

// Driver code
int main()
{
	int input_num;

	// Input till constraint satisfied
	do
	{
		printf("Input: ");
		scanf("%d", &input_num);
	} while (input_num < 1 || input_num > 15000);

	if (is_prime(input_num))
	{
		// Check mersennne only if input is prime
		if (is_mersenne(input_num))
		{
			printf("%d is a Mersenne Prime\n", input_num);
		}
		else
		{
			printf("%d is not a Mersenne Number\n", input_num);
		}
	}
	else
	{
		printf("%d is not a Mersenne number\n", input_num);
	}

	return 0;
}

int is_prime(int number)
{
	if (number == 1)
	{
		return 0;
	}

	for (int i = 2; i <= sqrt(number); i++)
	{
		// If a single divisor between 2 and sqrt of number
		// found, then it is not prime
		if (number % i == 0)
		{
			return 0;
		}
	}

	return 1;
}

// Returns true if param is mersenne number
int is_mersenne(int check_num)
{
	// Log base 2 returns exponent of 2
	float decimal_log = log2(check_num + 1);

	// If result of log is exact integer, the given number
	// is mersennne prime
	if (decimal_log == (int) decimal_log)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}