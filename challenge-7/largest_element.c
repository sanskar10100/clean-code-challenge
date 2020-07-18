/*
* C Program to print the largest element
* in an array
* Input Constraint: array_size >= 5
*/

#include <stdio.h>

// Returns the largest element from an integer array
int max(int *array, int size)
{
	// Assume that the first element is the largest
	int largest = array[0];

	for (int i = 1; i < size; i++)
	{
		// If current array element is greater than
		// currently largest element, current array element
		// becomes the new largest
		if (array[i] > largest)
		{
			largest = array[i];	
		}
	}

	return largest;
}

// Driver code
int main()
{
	int array_size;

	// Input until constraint satisfied
	do
	{
		printf("Input size: ");
		scanf("%d", &array_size);
	} while (array_size < 5);

	// Declaring variable sized array, available since C99
	int array[array_size];
	
	printf("Input array: \n");

	// Read array
	for (int i = 0; i < array_size; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("The largest element is: %d\n", max(array, array_size));

}