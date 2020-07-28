# Python3 program to to print the kth largest
# element from a list
# Input Constraint:
# list_size >= 5
# k <= list_size

# Algorithm shamelessly stolen from Sunil Kumar Gupta.
# Genius guy.

import heapq

# __main__ script

list_size = 0

# Satisfy input constraint
while list_size < 5:
	list_size = int(input('Input size: '))

elements = list()

element = 0

print('Input list:')

# Read list
for i in range(list_size):
	element = int(input())
	elements.append(element)

# Satisfy input constraint for k
while True:
	k = int(input('Input k: '))
	if k <= list_size:
		break

# heapq.nlargest() returns a list of n largest elements from the list
# by constructing a min-heap.
# Let list = {1, 2, 3, 4, 5}; k = 2; returned_list = {5, 4}
# -1 for printing the last element from the returned_list
print('kth largest element is:', heapq.nlargest(k, elements)[-1])