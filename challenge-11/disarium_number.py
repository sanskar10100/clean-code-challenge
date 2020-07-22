# Python3 program to check whether input is a Disarium
# number or not
# Input Constraint: > 0

import math

def is_disarium(check_num):
	digit_count = len(str(check_num))
	degree = digit_count
	copy = check_num
	resultant = 0

	# In 175, 1 has degree 1, 7 has 2, and 5 has 3
	# starting with rightmost digit, we exponentiate
	# to its degree and add to resultant
	while check_num != 0:
		digit = check_num % 10
		resultant += digit ** degree
		degree -= 1
		check_num //= 10

	if copy == resultant:
		return True
	else:
		return False

# __main__ script
input_num = 0

# Input till constraint satisfaction
# try except block used because I copied Anuj Kumar :)
while input_num < 1:
	try: 
		input_num = int(input('Input: '))
	except ValueError:
		print('Invalid Input!')

if is_disarium(input_num):
	print(f'{input_num} is a Disarium Number')
else:
	print(f'{input_num} is not a Disarium Number')