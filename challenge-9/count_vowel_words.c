/*
* C Program to count all the words in a string that
* start with a vowel.
* Input Constraint: String size = 500
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Print the cound of all the words starting with vowels
// in parameter string
void vowel_word_count(char *check_string);

// Return true if param is vowel
int is_vowel(char letter);

// Driver code
int main()
{
	char string[500];
	printf("Input String: ");
	fgets(string, 500, stdin);

	vowel_word_count(string);
	return 0;
}

// Print the cound of all the words starting with vowels
// in parameter string
void vowel_word_count(char *check_string)
{
	int vowel_count = 0;

	for (int i = 0, size = strlen(check_string); i < size; i++)
	{
		// 0'th value to accomodate for the first word
		// if char at i-1 value is ' ', then char at i
		// will be a word.
		if (i == 0 || check_string[i - 1] == ' ')
		{
			if (is_vowel(check_string[i]))
			{
				vowel_count++;
			}
		}
	}

	printf("Count: %d\n", vowel_count);
}

// Return true if param is vowel
int is_vowel(char letter)
{
	// convert to lowercase to accomodate capitalised
	// letters too
	switch (tolower(letter))
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': return 1;
		default: return 0;
	}
}