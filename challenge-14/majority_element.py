# Python3 program to find the majority element in a given
# list
# Input Constraint: 5 <= array_size <= 2000
# 0 <= element_value <= 100

def majority_element(original_list):
	majority_size = (len(original_list) // 2) + 1

	# If any element's count exceeds required size,
	# it is majority. If none found, -1
	for element in original_list:
		if original_list.count(element) >= majority_size:
			return element
	else:
		return -1

# __main__ script
list_size = 0

# Repeatedly input till constraint satisfied
while list_size < 5 or list_size > 2000:
	list_size = int(input('Input size: '))

input_list = list()

# Read list, re-read if out of bound
for i in range(list_size):
	element = -1
	while element < 0 or element > 100:
		element = int(input(f'Input element {i}: '))
	else:
		input_list.append(element)

majority_number = majority_element(input_list)

# No majority element found
if majority_number == -1:
	print('No majority element found')
else:
	print(f'{majority_number} is the majority element')
