/*
* C Program to print the freqeuncy of each
* element in an integer array;
* Input Constraint: Array size must be greater than 5
* This is the simplest, brute forced solution.
* Uses binary search tree for lookup
*/

#include <stdio.h>
#include <stdlib.h>

// Binary search tree structure definition
typedef struct bst
{
	int value;
	struct bst *left;
	struct bst *right;
} bst;

// Declare global BST root.
bst *root = NULL;

// Prints frequency of each element in an array
void print_freqeuncies(int arr[], int size);

// returns true if the element has been visited.
int is_visited(int element);

// Supporting functions for is_visited(). (BST Implementation)
void add_node(int data);

// Driver code
int main()
{
	int array_size;

	// Repeteadly take input until Input Constraint
	// satisfied
	do
	{
		printf("Input size: ");
		scanf("%d", &array_size);
	} while (array_size < 5);

	printf("Input Array Elements: \n");
	int array[array_size];

	// Read Array
	for (int i = 0; i < array_size; i++)
	{
		scanf("%d", &array[i]);
	}

	print_freqeuncies(array, array_size);

	return 0;
}

// Prints frequency of each element in an array
void print_freqeuncies(int arr[], int size)
{
	printf("Printing Frequencies: \n");

	int element, element_frequency;

	// Iterate for every position in the array
	for (int position = 0; position < size; position++)
	{
		// Reset element frequency to 0
		element_frequency = 0;

		// Store the element at the current array position
		element = arr[position];

		// If current array element frequeuncy has
		// already been counted before, continue onto
		// next element
		if (is_visited(element))
		{
			continue;
		}
		// Else add the current array element to the
		// visited list
		else
		{
			add_node(element);
		}

		// Check each array index from current
		// position onwards for occurence
		// of the element being currently checked
		// if element found, increase frequency.
		for (int i = position; i < size; i++)
		{
			// If checked index contains the element
			if (arr[i] == element)
			{
				element_frequency++;
			}
		}

		// Print element frequency.
		printf("%d occurs %d time(s)\n", element, element_frequency);

	}
}

// Returns true if param elements if found in the BST
// or, the element has been visited.
int is_visited(int element)
{
	bst *current = root;

	// If root null, the node hasn't been visited.
	if (root == NULL)
	{
		return 0;
	}
	else
	{
		bst *current = root;

		// Iterate until tree ends
		while (current != NULL)
		{
			// If element to be searched is less
			// than current node value, search left
			if (element < current -> value)
			{
				current = current -> left;
			}
			// If element to be searched is greater than
			// current node value, search right.
			else if (element > current -> value)
			{
				current = current -> right;
			}
			// Currrent node's value is equal to the element
			// element has been visited before.
			else if (current -> value == element)
			{
				return 1;
			}
		}

		// Lookup failed, element has not been visited.
		return 0;
	}
}


// Adds given value to the BST
void add_node(int data)
{
	bst *new_node = malloc(sizeof(bst));

	// Initialise new BST node.
	new_node -> value = data;
	new_node -> left = NULL;
	new_node -> right = NULL;

	// Root doesn't exist, create new BST
	if (root == NULL)
	{
		root = new_node;
	}
	else
	{
		bst *current = root;

		// Iterate until tree ends
		while (current != NULL)
		{
			// If value to be inserted is less than or equal to
			// current node value, traverse left
			if (new_node -> value <= current -> value)
			{	
				// If left node null, we have found the
				// last node, add new_node here.
				if (current -> left == NULL)
				{
					current -> left = new_node;
					break;
				}
				else
				{
					// Traverse left
					current = current -> left;
				}
			}
			// If value to be inserted is greater than
			// current node value, traverse right
			else if (new_node -> value > current -> value)
			{
				// If right node of current node null,
				// add new node here.
				if (current -> right == NULL)
				{
					current -> right = new_node;
					break;
				}
				else
				{
					// Traverse right
					current = current -> right;
				}
			}
		}

	}
}