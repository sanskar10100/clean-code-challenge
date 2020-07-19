# Python3 program to convert decimal numbers to binary
# and print it
# Input Constraint: decimal_num > 7

import math

# Convert decimal to binary and print
def dec_to_bin(dec_num):

	# Create empty list
	binary_num = list()

	# Iteratively store remainder in a list. The remainder
	# is the binary digit pattern
	while dec_num != 0:
		remainder = dec_num % 2
		binary_num.append(remainder)
		# '//' operator is floor division op
		dec_num = dec_num // 2

	print('Binary: ', end='')

	# Print the binary_num list in reverse
	for bit in binary_num[::-1]:
		print(f'{bit}', end="")

	# newline
	print()


# __main__ script
decimal_num = 0

while decimal_num < 8:
	decimal_num = int(input('Input decimal num: '))

dec_to_bin(decimal_num)