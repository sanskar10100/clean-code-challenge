/*
* C Program to input a number of arrays and
* check print whether they're sorted or not
* 2 <= number_of_arrays <= 10
* 5 <= size_of_each_array <= 100
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Allocates memory to each pointer and input array
int* input_arrays(int *arrays[], int num_of_arrays);

// Returns true if array is sorted
bool is_sorted(int array[], int size);

// Driver code
int main()
{
	int num_of_arrays;

	// Satisfy input constraint
	do
	{
		printf("Input number of arrays: ");
		scanf("%d", &num_of_arrays);
	} while (num_of_arrays < 2 || num_of_arrays > 10);

	int *arrays[num_of_arrays];

	// Input array and their sizes
	// Store size of each array
	int *size_of_each_array = input_arrays(arrays, num_of_arrays);

	// Print whether sorted or not
	for (int i = 0; i < num_of_arrays; i++)
	{

		// If ith array is sorted
		if (is_sorted(arrays[i], size_of_each_array[i]))
		{
			printf("array %d: sorted\n", i + 1);
		}
		else
		{
			printf("array %d: not sorted\n", i + 1);
		}
	}

	return 0;
}

// Allocates memory to each pointer and input array
int* input_arrays(int *arrays[], int num_of_arrays)
{
	// Store size for each array
	int *size_of_each_array = malloc(sizeof(int) * num_of_arrays);

	int size;

	// Input each array
	for (int i = 0; i < num_of_arrays; i++)
	{
		do
		{
			// Input size for ith array
			printf("Input array %d size: ", i + 1);
			scanf("%d", &size);
		} while (size < 5 || size > 100);

		// Dynamically allocate memory to each array
		arrays[i] = malloc(sizeof(int) * size);

		// Input ith array
		printf("Input array %d elements: ", i + 1);
		for (int j = 0; j < size; j++)
		{
			scanf("%d", &arrays[i][j]);
		}

		// Store size for each array in the sizes array
		size_of_each_array[i] = size;
	}

	return size_of_each_array;
}

// Returns true if array is sorted
bool is_sorted(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		// If a single element out of place, not sorted
		if (array[i] > array[i + 1])
		{
			return 0;
		}
	}

	// No out of place element found, array is sorted
	return 1;
}