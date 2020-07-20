# Python3 program to count the number of words
# in input string that start with a vowel
# Input Constraint: max_string_size = 500

import sys

# Count num of words starting with vowel in param
def count_vowel_words(check_string):

	count = 0

	# Generate list of words, on basis of ' '
	list_of_words = check_string.split(' ')

	# check each word in the list
	for word in list_of_words:

		# For extra spaces
		if len(word) == 0:
			continue
			
		# 0th index contains the first letter for each
		# word. Converting to lowercase ensures that capitals
		# are counted too
		if word[0].lower() in ['a', 'e', 'i', 'o', 'u']:
			count += 1

	print(f'Count: {count}')


# __main__ code

string = input('Enter String: ')

# If input constraint violated, exit. Also exit on empty string
if len(string) > 500 or len(string) == 0:
	print('Error: Invalid lenght of string')
	sys.exit(1)

count_vowel_words(string)