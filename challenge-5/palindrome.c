/*
* C Program to check whether the input number is
* palindromic or not
* Input Constraint: Greater than 0
*/

#include <stdio.h>

// Reverses the input num
int reverse(int original_num);

// Returns 1 if param is palindrome
int is_palindrome(int check_num);

// Driver code
int main()
{
	int num_to_check;

	// Repeatedly take input until constraint satisfied
	do
	{
		printf("Input: ");
		scanf("%d", &num_to_check);
	} while (num_to_check < 1);

	if (is_palindrome(num_to_check))
	{
		printf("Palindrome!\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}

	return 0;
}

// Returns 1 if param is palindrome
int is_palindrome(int check_num)
{
	// A num is palindrome if its reverse is equal to
	// the original number itself
	if (reverse(check_num) == check_num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

// Reverses the input num
int reverse(int original_num)
{
	int reverse_num = 0;

	while (original_num != 0)
	{	
		// Logic used: Generate a new number, each time
		// incrementing digit place and adding last digit
		// of original_num
		reverse_num = (reverse_num * 10) + (original_num % 10);
		original_num /= 10;
	}

	return reverse_num;
}