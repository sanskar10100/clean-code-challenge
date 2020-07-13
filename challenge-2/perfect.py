# Python3 program to find whether input is perfect number
# or not. Constraint input between 3 and 4999 (inclusive)

def is_perfect_number(number_to_check):
	
	sum_of_divisors = 0

	# Set maximum bound for iteration
	# Upto exactly half the number.
	max_iter = int(number / 2)

	# Iterate from 1 to maximum iteration bound
	# 1 added to max_iter because range function generates
	# range object from k to n-1
	for i in range(1, max_iter + 1):
		if number_to_check % i == 0:
			sum_of_divisors += i

	# Self Explanatory
	if sum_of_divisors == number_to_check:
		return True
	else:
		return False


# Global Script, equivalent to main()

# Keep iterating and prompt for input until constraint
# satisfied
number = 0
while (number <= 2) or (number >= 5000):
	number = int(input("Input: "))

if is_perfect_number(number):
	print('{} is a perfect number'.format(number))
else:
	print('{} is not a perfect number'.format(number))

