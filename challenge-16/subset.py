# Python3 program to input 2 sets or lists and check
# whether the 2nd list is a subset of the 1st
# Input Constraint: list_size >= 2

# __main__ script

size_1, size_2 = 0, 0

size_1 = int(input('Input array 1 size: '))

size_2 = int(input('Input array 2 size: '))

# Input Constraint Violated
if size_1 < 2 or size_2 < 2:
	raise Exception('Min Array Size: 2')

print('Input array 1:')

set_1 = set()
set_2 = set()

# Read array 1 and store in set_1
for i in range(size_1):
	number = int(input())
	set_1.add(number)

# Read array 2 and store in set_2
print('\nInput array 2:')

for i in range(size_2):
	number = int(input())
	set_2.add(number)

if set_2.issubset(set_1):
	print('2nd array is a subset of the first')
else:
	print('2nd array is not a subset of the first')