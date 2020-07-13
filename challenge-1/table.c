/*
* C Program to print multiplication
* table for number between 2 and 15
* input from the user
*/

#include <stdio.h>

// Prints table of given number upto 10
void print_table(int number);

// Driver code
int main()
{
	int num;
	printf("Input: ");
	scanf("%d", &num);

	// If input number is within range
	if (num >= 2 && num <= 15)
	{
		print_table(num);
	}

	return 0;
}

// Prints table of given parameter number upto 10
void print_table(int number)
{
	// Print table
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", number, i, number * i);
	}
}
