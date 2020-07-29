'''
Python3 program to rotate the elements of a list
by a given number of positions.
Input Constraint: list_size >= 5
position < list_size
'''

# Rotates elements of list by given positions
def rotate(original_list, position):
	for i in range(position):
		# Remove the last item
		element = original_list.pop()
		# Add to front
		original_list.insert(0, element)

# __main__ script
list_size = 0

# Satisfy list_size input constraint
while list_size < 5:
	list_size = int(input('Input list_size: '))

original_list = list()
print('Input list:')

# Read list
for i in range(list_size):
	num = int(input())
	original_list.append(num)

# Satisfy position input constraint
while True:
	position = int(input('Input position(s): '))
	if position < list_size:
		break

# Generate rotated list using a duplicate list
rotate(original_list, position)

print('Rotated list: ')
for element in original_list:
	print(element, end=' ')
print()