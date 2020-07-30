'''
Python3 program to generate and print
a sorted subarray from a user input array
Input Constraint:
array_size >= 5
subarray_lower_bound >= 0
subarray lower_bound <= subarray_upper_bound < array_size
'''
import sys

# __main__ script

list_size = 0

# Satisfy size constraint
while list_size < 5:
	list_size = int(input('Input size: '))

print('Input list: ')

elements = list()

# Read list
for i in range(list_size):
	element = int(input())
	elements.append(element)

lower_bound = int(input('Input sublist lower bound: '))
upper_bound = int(input('Input sublist upper bound: '))

# In case of input constraint violation for subarray bounds
if lower_bound < 0 or (upper_bound < lower_bound or upper_bound >= list_size):
	raise Exception('Input Constraint Violated')
	sys.exit(1)

# Generate sublist
sublist = elements[lower_bound : int(upper_bound + 1)]

sublist.sort()

print('Sorted Sublist: ', end='')

# Print the sorted sublist
for item in sublist:
	print(item, end=' ')
print()

