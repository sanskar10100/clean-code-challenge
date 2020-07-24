/*
* C Program to print the count of distinct elements
* in an input array
* Input Constraints: 5 <= size <= 100
* 0 <= element value <= 100
*/

#include <stdio.h>
#include <stdbool.h>

#define FREQUENCY_SIZE 101

// Returns distinct_count of distinct elements
int count_distinct(int array[], int size);

// Driver code
int main()
{
	int array_size;

	// Input till constraint satisfied
	do
	{
		printf("Input size: ");
		scanf("%d", &array_size);
	} while (array_size < 5 || array_size > 100);

	int input_array[array_size];

	printf("Input array elements: \n");

	// Input array, re-input out of bound elements
	for (int i = 0; i < array_size; i++)
	{
		printf("Input element %d: ", i);
		scanf("%d", &input_array[i]);

		// If element value out of bound, reset i to
		// previous value to input again
		if (input_array[i] < 0)
		{
			printf("\nError: Min Element Value = 0\n\n");
			i -= 1;
		}
		else if (input_array[i] > 100)
		{
			printf("\nError: Max Element Value = 100\n\n");
			i -= 1;
		}
	}

	printf("Distinct distinct_count: %d\n", count_distinct(input_array, array_size));

	return 0;
}

// Returns distinct_count of distinct elements
int count_distinct(int array[], int size)
{
	int index;
	int distinct_count = 0;
	// Declare and initialise all elements to 0
	int frequency[FREQUENCY_SIZE] = {};

	// Generate frequency of each element. Record frequency
	// of each element at its index
	for (int i = 0; i < size; i++)
	{
		index = array[i];
		frequency[index]++;
	} 

	// Count distinct, if frequency 1
	for (int i = 0; i < FREQUENCY_SIZE; i++)
	{
		if (frequency[i] == 1)
		{
			distinct_count++;
		}
	}

	return distinct_count;
}