/*
* C Program to merge two sorted arrays into one and print it
* Input Constraint: Array size greater than or equal to 5
* Exit if either one of the array is unsorted
*/

#include <stdio.h>

// Returns true if input array is sorted
int is_sorted(int array[], int size);

// Merges two sorted arrays into one and prints
void merge_sorted_arrays(int array_1[], int array_2[], int size_1, int size_2);

// Driver code
int main()
{
	int size_1, size_2;

	// Input size_1 until constraint satisfaction
	do
	{
		printf("Enter size for array 1: ");
		scanf("%d", &size_1);
	} while (size_1 < 5);

	// Input size_2 until constraint satisfaction
	do
	{
		printf("Enter size for array 2: ");
		scanf("%d", &size_2);
	} while (size_2 < 5);

	int array_1[size_1], array_2[size_2];

	printf("Enter elements for array 1: \n");
	for (int i = 0; i < size_1; i++)
	{
		scanf("%d", &array_1[i]);
	}

	printf("Enter elements for array 2: \n");
	for (int i = 0; i < size_2; i++)
	{
		scanf("%d", &array_2[i]);
	}

	// Proceed only if both input arrays are already sorted
	if (is_sorted(array_1, size_1) && is_sorted(array_2, size_2))
	{
		merge_sorted_arrays(array_1, array_2, size_1, size_2);
	}
	else
	{
		// Print to standard error stream
		fprintf(stderr, "ERROR: Input Array Unsorted!\n");
	}
}

// Returns true if input array is sorted
int is_sorted(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		// If even a single element is out of place,
		// array is unsorted.
		if (array[i] > array[i + 1])
		{
			return 0;
		}
	}

	return 1;
}

// Merges two sorted arrays into one and prints
void merge_sorted_arrays(int array_1[], int array_2[], int size_1, int size_2)
{
	// Respective indexes for the three arrays
	int i = 0, j = 0, k = 0;

	int size_3 = size_1 + size_2;
	int array_final[size_3];

	// Generate merged array
	while (k < size_3)
	{
		// If item at index i in the first array
		// is smaller, add to array_final, otherwise
		// add second array's element
		if (array_1[i] <= array_2[j])
		{
			array_final[k] = array_1[i];
			i++;
		}
		else
		{
			array_final[k] = array_2[j];
			j++;
		}

		k++;

		// If either one array is completed, fill the
		// final array with the rest of the elements
		// of the other array
		if (i == size_1)
		{
			while (j < size_2)
			{
				array_final[k] = array_2[j];
				j++;
				k++;
			}
			break;
		}
		else if (j == size_2)
		{
			while (i < size_1)
			{
				array_final[k] = array_1[i];
				i++;
				k++;
			}
			break;
		}

	}

	printf("Merged Array: ");

	for (int i = 0; i < size_3; i++)
	{
		printf("%d ", array_final[i]);
	}

	printf("\n");
}