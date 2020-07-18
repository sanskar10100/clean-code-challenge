# Python3 program to print the largest element
# in a list
# Input Constraint: array_size >= 5

list_size = 0

# Input until Constraint satisfied
while list_size < 5:
	list_size = int(input("Input size: "))

# Declare empty list
elements = list()

# Read list from user
for i in range(list_size):
	num = int(input('Input list: '))
	elements.append(num)

# max (inbuilt in Python) returns maximum element from a structure
print(f'The largest is: {max(elements)}')