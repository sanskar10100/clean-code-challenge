/*
* C Program to check whether
* a given number is abundant, perfect or deficient
* Input Constrant: 10 <= input_num <= 2000
*/

#include <stdio.h>

// Returns the type of param num through integer value
int check_num_type(int check_num);

// Driver code
int main()
{
	int input_num;

	// Repeteadly input till constraint satisfied
	do
	{
		printf("Input: ");
		scanf("%d", &input_num);
	} while (input_num < 10 || input_num > 2000);

	if (check_num_type(input_num) > 0)
	{
		printf("%d is an abundant number\n", input_num);
	}
	else if (check_num_type(input_num) == 0)
	{
		printf("%d is a perfect number\n", input_num);
	}
	else if (check_num_type(input_num) < 0)
	{
		printf("%d is a deficient number\n", input_num);
	}

	return 0;
}

// Returns the type of param num through integer value
int check_num_type(int check_num)
{
	int sum_of_divisors = 1;

	// Find sum all the divisors of check_num
	for (int number = 2; number <= check_num / 2; number++)
	{
		if (check_num % number == 0)
		{
			sum_of_divisors += number;
		}
	}

	// If abundant, returns greater than 0
	// If perfect, returns 0
	// If deficient, returns less than 0
	return (sum_of_divisors - check_num);
}	