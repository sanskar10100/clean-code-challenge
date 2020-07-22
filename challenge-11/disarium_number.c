/*
* C Program to check whether input is a disarium
* number or not
* Input Constratint: > 0
*/

#include <stdio.h>
#include <math.h>

// Returns true if param is disarium number
int is_disarium(int check_num);

// Returns number of digits in param number
int count(int number);

// Driver code
int main()
{
	int input_num;

	// Input till constraint satisfaction
	do
	{
		printf("Input: ");
		scanf("%d", &input_num);
	} while (input_num < 1);

	if (is_disarium(input_num))
	{
		printf("%d is a Disarium number\n", input_num);
	}
	else
	{
		printf("%d is not a Disarium number\n", input_num);
	}

	return 0;
}


// Returns true if param is disarium number
int is_disarium(int check_num)
{
	int digit_count = count(check_num);
	// Degree of last digit is count itself
	int degree = digit_count, resultant = 0, digit, copy = check_num;

	// Generate resultant by taking the digit, raising it
	// to the degree (its position in the check_num) and then 
	// adding to resultant.
	while (check_num != 0)
	{
		digit = check_num % 10;
		resultant += pow(digit, degree);
		check_num /= 10;
		degree -= 1;
	}

	if (resultant == copy)
	{
		return 1;
	}
	else
	{
		return 0;	
	}
}

// Returns number of digits in param number
int count(int number)
{
	int digit_count = 0;

	// Until number is 0, remove digits and increase count
	while (number != 0)
	{
		number /= 10;
		digit_count += 1;
	}

	return digit_count;
}