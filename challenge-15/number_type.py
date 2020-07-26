# Python3 program to find whether input number
# is abundant, perfect or deficient
# Input Constraint: 10 <= input_num <= 2000

# Returns the type of number through integer value
def check_num_type(check_num):
	sum_of_divisors = 1

	# Find and add together all proper divisors of
	# 
	for number in range(2, (check_num // 2) + 1):
		if check_num % number == 0:
			sum_of_divisors += number

	# Greater than 0 means abundant
	# Equal to 0 means perfect
	# Less than 0 means deficient
	return (sum_of_divisors - check_num)

# __main__ script

input_num = 0

# Repeatedly input constraint satisfied
while input_num < 10 or input_num > 2000:
	try:
		input_num = int(input('Input: '))
	except ValueError:
		print('Invalid Input')

if check_num_type(input_num) > 0:
	print(f'{input_num} is an abundant number')
elif check_num_type(input_num) == 0:
	print(f'{input_num} is a perfect number')
elif (check_num_type(input_num)) < 0:
	print(f'{input_num} is a deficient number')
