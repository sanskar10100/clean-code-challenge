/*
* C Program to print the kth largest
* element from an array
* Input Constraint:
* array_array_size >= 5
* k <= array_array_size
*/

#include <stdio.h>

// Quick Sort Implementation
void quick_sort(int array[], int low, int high);

// No explanation required
void swap(int *x, int *y);

// Taking last element as pivot and places pivot
// at its correct position. Helper of fun quick_sort
int partition(int array[], int low, int high);



// Driver code
int main()
{
	int array_size;

	// Repeteadly input till constraint satisfied
	do
	{
		printf("Input array_size: ");
		scanf("%d", &array_size);
	} while (array_size < 5);

	int array[array_size];

	printf("Input array:\n");

	for (int i = 0; i < array_size; i++)
	{
		scanf("%d", &array[i]);
	}

	quick_sort(array, 0, array_size - 1);

	int k;

	// Repeteadly input till constraint satisfied
	do
	{
		printf("Input k: ");
		scanf("%d", &k);
	} while (k > array_size);

	printf("kth largest is: %d\n", array[array_size - k]);

	return 0;
}


// No explanation required
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

// Taking last element as pivot and places pivot
// at its correct position. Helper of fun quick_sort
int partition(int array[], int low, int high)
{
	// I have no idea how quick sort works
	// Copied from GfG
	int pivot = array[high];
	int i = low - 1;

	for (int j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

// Quick Sort Implementation
void quick_sort(int array[], int low, int high)
{
	if (low < high)
	{
		int partition_index = partition(array, low, high);

		// Sort left of partition_index, and right of partition_index
		quick_sort(array, low, partition_index - 1);
		quick_sort(array, partition_index + 1, high);
	}
}
