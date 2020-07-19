/* C Program to convert input decimal number
* to binary and print it.
* Input Constraint: Decimal number > 7
*/

#include <stdio.h>
#include <math.h>

// Converts binary to dec
void dec_to_bin(int decimal_num);

// Driver code
int main()
{
	int decimal_num;

	// Prompt input until constraint satisfied
	do
	{
		printf("Input decimal num: ");
		scanf("%d", &decimal_num);
	} while (decimal_num < 8);

	dec_to_bin(decimal_num);

	return 0;
}

// Converts binary to dec
void dec_to_bin(int decimal_num)
{	
	// n bits are required to represent 2^n - 1 in decimal.
	// hence log base 2 gives the num of binary bits required
	// to represent decimal_num. Added 1 to complete range
	// For example, decimal_num = 64, log base(2) = 6 + 1 = 7
	// 7 bits required for writing 64 in binary
	int size = log2(decimal_num) + 1;
	int binary_num[size];

	int count = 0;

	// Iteratively Store each remainder when dividing by 2
	// as binary bits until decimal_num is 0
	while (decimal_num != 0)
	{
		binary_num[count] = decimal_num % 2;
		decimal_num /= 2;
		count++;
	}

	printf("Binary: ");

	// Print binary_num in reverse
	for (int i = size - 1; i >= 0; i--)
	{
		printf("%d", binary_num[i]);
	}

	printf("\n");
}