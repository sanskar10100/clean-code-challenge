/* 
* C Program to input 2 arrays and find whether
* the 2nd is a subset of the first
* Input Constraint: size >= 2
*/

#include <stdio.h>
#include <stdlib.h>

// Singly linked list structure to implmement
// separate chaining collision handling
typedef struct node
{
	int data;
	struct node *next;
}node;

// Adds param element to hash_map
void add_element(int element, node *hash_map[], int size);

// Returns true if parma element is in given hash_map
int is_in_hash_map(int element, node *hash_map[], int size);

// Return hash for a number
unsigned int hash(unsigned int x);

// Driver code
int main()
{
	int size_1, size_2;

	printf("Enter array 1 size: ");
	scanf("%d", &size_1);

	printf("Enter array 2 size: ");
	scanf("%d", &size_2);

	// If input constraint violated
	if (size_1 < 2 || size_2 < 2)
	{
		printf("Runtime Exception: Min Size = 2\n");
		printf("Press any key to exit\n");
		getchar();
		getchar();
		exit(1);
	}

	// Use hash map to store the first array's element
	// to efficiently search

	node *hash_map[size_1];
	int array_2[size_2];

	int number;

	printf("Input array 1:\n");
	// Input elements in array format and store
	// in hash table
	for (int i = 0; i < size_1; i++)
	{
		scanf("%d", &number);
		add_element(number, hash_map, size_1);
	}

	printf("Input array 2:\n");

	// Read second array and store in array
	for (int i = 0; i < size_2; i++)
	{
		scanf("%d", &array_2[i]);
	}

	// Check if each element of 2nd array is
	// in the hash_map of the first array
	for (int i = 0 ; i < size_2; i++)
	{
		// If any element of array_2 not found in the
		// first, return with result.
		if (is_in_hash_map(array_2[i], hash_map, size_1) == 0)
		{
			printf("2nd array is not a subset of the first array\n");
			return 0;
		}		
	}

	printf("2nd array is a subset of the first array\n");

	return 0;

}

// Adds param element to hash_map
void add_element(int element, node *hash_map[], int size)
{
	unsigned int index = hash(element) % size;

	// Initialise new bucket (linked list node)
	node *new = malloc(sizeof(node));
	new -> data = element;
	new -> next = NULL;

	if (hash_map[index] == NULL)	
	{
		hash_map[index] = new;
	}
	else
	{
		// If collision occurs, add new bucket
		// to beginning of current index's chain

		node *current_head = hash_map[index];
		new -> next = current_head;
		hash_map[index] = new;
	}
}

// Return hash for a number
unsigned int hash(unsigned int x)
{
	// Copied from StackOverflow
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x;
}

// Returns true if parma element is in given hash_map
int is_in_hash_map(int element, node *hash_map[], int size)
{
	unsigned int index = hash(element) % size;

	node *current = hash_map[index];

	// Traverse chain for a particular index
	// to find occurence of element
	while (current != NULL)
	{
		if (current -> data == element)
		{
			return 1;
		}

		current = current -> next;
	}

	// If element not found in chain
	return 0;
}