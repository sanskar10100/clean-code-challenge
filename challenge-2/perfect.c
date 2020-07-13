/*
* C Program to find out whether a given number
* is perfect or not. A perfect number is one in which
* sum of the proper divisors of the number results
* in the number itself. 
* Input Constraint: Greater than 2, less than 5000
*/

#include <stdio.h>

// Returns true if a number is perfect
int is_perfect(int number);

// Driver code
int main()
{
	int number_to_check;
	// Keep taking input until constraint satisfied
	do
	{
		printf("Input: ");
		scanf("%d", &number_to_check);
	} while (number_to_check <= 2 || number_to_check >= 5000);

	// is_perfect returns 1 if argument is perfect
	if (is_perfect(number_to_check))
	{
		printf("%d is a perfect number\n", number_to_check);
	}
	else
	{
		printf("%d is not a perfect number\n", number_to_check);
	}
}

int is_perfect(int number)
{
	int sum_of_divisors = 0;
	// Iterate till half of the parameter to find
	// all proper factors and add them together
	for (int i = 1; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			sum_of_divisors += i;
		}
	}

	// No comment needed, self explanatory
	if (sum_of_divisors == number)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
