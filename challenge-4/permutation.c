/*
* C Program to find the output of the nPr permutation
* function. nPr = n! / (n - r)! Input Constraints: 
* 2 <= n <= 20
* 0 <= r < n
*/

#include <stdio.h>

// Returns true if input constraint satisfied
int check_input_constraint(int n, int r);

// Generate factorial of given number
unsigned long factorial_of(int num);

// Driver code
int main()
{
	int n, r;
	double result;

	printf("Input n: ");
	scanf("%d", &n);

	printf("Input r: ");
	scanf("%d", &r);

	// If input constraint is not satisfied
	if (check_input_constraint(n, r) == 0)
	{
		// Error code 1 indicates imperfect execution
		printf("Error: Input Constraint Violated\n");
		return 1;
	}

	// type casting numerator to float ensures float
	// division. If casting to float isn't done, decimal
	// part of division is lost.
	result = (float) factorial_of(n) / factorial_of(n - r);

	printf("%dP%d = %.2f\n", n, r, result);
}

// Returns true if input constraint satisfied
int check_input_constraint(int n, int r)
{
	// n_constraint is 1, if statement after '=' is
	// true, otherwise 0
	int n_constraint = (n >= 2 && n <= 20);

	// r_constraint is 1, if statement after '=' is true
	// otherwise 0
	int r_constraint = (r >= 0 && r < n);

	// 1 && 1 == 1; If both constraints are 1, then input
	// constraint satisfied, return true (1)
	if (n_constraint && r_constraint)
	{
		return 1;
	}
	else
	{
		// One or both input constraint failed,
		// return false
		return 0;
	}
}

// Generate factorial of given number
unsigned long factorial_of(int num)
{
	unsigned long factorial = 1;
	
	// Iterate from 2 to num. If num = 5, factorial for
	// 2, 3, 4 and 5 generated (120)
	for (int i = 2; i <= num; i++)
	{
		factorial *= i;
	}

	return factorial;
}