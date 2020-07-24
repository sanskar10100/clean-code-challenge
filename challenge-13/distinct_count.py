# Python3 program to print the count of distinct elements
# in an input list
# Input Constraint: 5 <= list_size <= 100
# 0 <= element_value <= 100

def count_distinct(input_list):
	distinct_count = 0
	
	# If count of element is 1, is is unique
	# else duplicate
	for element in input_list:
		if input_list.count(item) == 1:
			distinct_count += 1
	else:
		return distinct_count

# __main__ script

list_size = 0

# Input till constraint satisfaction
while list_size < 5 or list_size > 100:
	list_size = int(input('Input size: '))

input_list = list()

print('Input list elements: ')

# Input list, re-input out of bound elements
for i in range(list_size):
	element = -1
	while element < 0 or element > 100:
		element = int(input(f'Input list element {i + 1}: '))

		if element < 0:
			print('Error: Min Element Value = 0')
		elif element > 100:
			print('Error: Max Element Value = 100')
	else:
		input_list.append(element)

print(f'Distinct Count: {count_distinct(input_list)}')

