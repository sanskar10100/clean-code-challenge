# Python3 program to check whether input is a
# Mersenne number or not
# Input Constraint: 0 < Input <= 15000

import math

# Returns true if param is prime
def is_prime(number):
	if number == 1:
		return False

	# +1 to offset for range fuction
	max_bound = int(math.sqrt(number)) + 1

	for divisior in range(2, max_bound):
		if number % divisior == 0:
			return False
	else:
		return True

# Returns true if param is mersenne
def is_mersenne(check_num):
	log = math.log2(check_num + 1)

	# if var log is integer
	# is_integer is float function
	if log.is_integer():
		return True
	else:
		return False

# __main__ script
input_num = 0

# Iterate until input constraint satisfied
while input_num < 1 or input_num > 15000:
	try:
		input_num = int(input('Input: '))
	except ValueError:
		print('Invalid Input')

if is_prime(input_num):
	if is_mersenne(input_num):
		print(f'{input_num} is a Mersenne Number')
	else:
		print(f'{input_num} is not a Mersenne Number')
else:
	print(f'{input_num} is not a Mersenne Number')
