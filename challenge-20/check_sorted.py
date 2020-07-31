'''
Python3 program to input a number of arrays
and print whether each of them is sorted or not
2 <= number_of_arrays <= 10
5 <= size_of_each_array <= 100
'''

# __main__ scipts

num_of_lists = 0

# Satisfy input constraint
while num_of_lists < 2 or num_of_lists > 10:
	num_of_lists = int(input('Input number of lists: '))

lists = list()
elements = list()

# Input individual lists
for i in range(num_of_lists):
	size = 0

	# Satisfy input constraint for size of each list
	while size < 5 or size > 100:
		size = int(input(f'Input list {i + 1} size: '))

	print(f'Input list {i + 1} elements: ')

	# Input ith list
	for j in range(size):
		element = int(input())
		elements.append(element)

	# Individual ith list input, add to collection of
	# lists. Slice operator used to actually append the list
	# contents, not the reference
	lists.append(elements[:])
	# Empty for next input
	elements.clear()	

for i in range(num_of_lists):
	# If sorted version and actual list is equal,
	# list is sorted
	if sorted(lists[i]) == lists[i]:
		print(f'list {i + 1}: sorted')
	else:
		print(f'list {i + 1}: not sorted')