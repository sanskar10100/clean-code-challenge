/*
* C Program to print the sorted subarray
* from a parent array
* Input constraint:
* array_size >= 5
* subarray_lower_bound >= 0
* subarray lower_bound <= subarray_upper_bound < array_size
*/

#include <stdio.h>
#include <stdlib.h>

// Returns sorted subarray from param array
int *return_sorted_subrarray(int array[], int size, int lower_bound, int upper_bound);

// Sorts an array using insertion sort
void sort_array(int array[], int size);

// Driver code
int main()
{
	int array_size;

	// Satisft size constraint
	do
	{
		printf("Input size: ");
		scanf("%d", &array_size);
	} while (array_size < 5);

	int array[array_size];
	printf("Input array:\n");

	// Read array
	for (int i = 0; i < array_size; i++)
	{
		scanf("%d", &array[i]);
	}

	int lower_bound, upper_bound;

	printf("Input subarray lower bound: ");
	scanf("%d", &lower_bound);

	printf("Input subarray upper bound: ");
	scanf("%d", &upper_bound);

	if (lower_bound < 0 || (upper_bound < lower_bound || upper_bound >= array_size))
	{
		printf("Error: Input Constraint Violated\n");
		exit(1);
	}

	int *sorted_subarray = return_sorted_subrarray(array, array_size, lower_bound, upper_bound);

	printf("Soted subarray: ");

	// display sorted subarrau
	for (int i = 0; i <= upper_bound - lower_bound; i++)
	{
		printf("%d " , sorted_subarray[i]);
	}
	printf("\n");

	return 0;
}

// Sorts an array using insertion sort
void sort_array(int array[], int size)
{
	int key, j; 
	for (int i = 1; i < size; i++) 
	{ 
		key = array[i]; 
		j = i - 1; 
  
		// Move elements of array[0..i-1], that are 
		// greater than key, to one position ahead 
		// of their current position
		while (j >= 0 && array[j] > key) 
		{ 
			array[j + 1] = array[j]; 
			j = j - 1; 
		} 
		array[j + 1] = key; 
	}
}

// Returns sorted subarray from param array
int *return_sorted_subrarray(int array[], int size, int lower_bound, int upper_bound)
{
	// let ub = 4, lb = 2, ub - lb = 2, array size needed = 3, thus +1
	int subarray_size = upper_bound - lower_bound + 1;
	int *subarray = malloc(sizeof(int) * subarray_size);

	// Generate separate subarray
	for (int i = 0, j = lower_bound; i < subarray_size && j <= upper_bound; i++, j++)
	{
		subarray[i] =  array[j];
	}

	// Sort subarray
	sort_array(subarray, subarray_size);
	return subarray;
}