/*
* C Progra to find the majority element in an input
* array.
* Input Constraints: 5 <= array_size <= 2000
* 0 <= element_value <= 100
*/

#include <stdio.h>

#define FREQUENCY_SIZE 101

// Return the majority element from an array
int majority_element(int original_array[], int size);

// Driver code
int main()
{
	int array_size;

	// Input till constraint satisfied
	do
	{
		printf("Input size: ");
		scanf("%d", &array_size);
	} while (array_size < 5 || array_size > 2000);

	int array[array_size];

	// Read element. If out of bound, re-input.
	for (int i = 0; i < array_size; i++)
	{
		do
		{
			printf("Input element %d: ", i);
			scanf("%d", &array[i]);
		} while (array[i] < 0 || array[i] > 100);
	}

	int majority_number = majority_element(array, array_size);

	// -1 means no majority element found
	if (majority_number == -1)
	{
		printf("No Majority Element found\n");
	}
	else
	{
		printf("%d is the majority element\n", majority_number);
	}

	return 0;
}


// Return the majority element from an array
int majority_element(int original_array[], int size)
{
	// Declare an initialise all elements to 0
	int frequency[FREQUENCY_SIZE] = {};
	int frequency_index;

	// Generate and store frequency count of each element
	// in original array by incrementing the index equal
	// to the element value
	for (int i = 0; i < size; i++)
	{
		frequency_index = original_array[i];
		frequency[frequency_index] += 1;
	}

	int majority_frequency = (size / 2) + 1;

	// If any indexes (element's) frequency is greater
	// than required number for majority, return that index
	// as the majority element.
	for (int i = 0; i < FREQUENCY_SIZE; i++)
	{
		if (frequency[i] >= majority_frequency)
		{
			return i;
		}
	}

	// If no majority element found
	return -1;
}