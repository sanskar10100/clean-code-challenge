/*
* C Program to rotate an array towards right
* by a given number of position
* Input Constraint: size >= 5
* position < size
*/

#include <stdio.h>

// Rotates elements of param array by given number of positions
void rotate(int original_array[], int size, int position);

// Driver code
int main()
{
	int array_size;

	// Satisfy size constraint
	do
	{
		printf("Input size: ");
		scanf("%d", &array_size);
	} while (array_size < 5);

	int original_array[array_size];

	// Read array
	printf("Input array:\n");
	for (int i = 0; i < array_size; i++)
	{
		scanf("%d", &original_array[i]);
	}

	int position;
	// Satisfy position constraint
	do
	{
		printf("Input position(s): ");
		scanf("%d", &position);
	} while (position >= array_size);

	// Generate rotated array using O(n) extra space
	rotate(original_array, array_size, position);

	printf("Rotated Array: ");

	// Print rotated array
	for (int i = 0; i < array_size; i++)
	{
		printf("%d ", original_array[i]);
	}

	printf("\n");
}

// Rotates elements of param array by given number of positions
void rotate(int original_array[], int array_size, int position)
{
	int copy_array[array_size];

	// Make a copy of the original_array
	for (int i = 0; i < array_size; i++)
	{
		copy_array[i] = original_array[i];
	}

	int new_index;

	// Rotate array
	for (int i = 0; i < array_size; i++)
	{
		new_index = i + position;
		// mod of new index with size allows to wrap around
		// the array
		new_index = new_index % array_size;
		original_array[new_index] = copy_array[i];
	}
}