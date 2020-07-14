# Python3 program to print all prime numbers upto
# input.
# Input constraint: Between 10 and 1000 (inclusive)

import math

# Return True if param is prime
def is_prime(check_number):

	# Check divisiors upto sqrt of num
	iterate_upto = int(math.sqrt(check_number))

	# 1 added because range goes from k to n-1
	# Not prime if at least one divisor
	for divisor in range(2, iterate_upto + 1):
		if check_number % divisor == 0:
			return False

	# Return true if no proper divisor found
	return True


# Print space seperated primes upto max_bound
def print_primes(max_bound):

	# range goes from k to n-1
	for number in range (2, max_bound + 1):
		if is_prime(number):
			print(f'{number}', end=" ")

	# newline
	print()

# Global, execute first

# Iterate until input constraint satisfied
max_num = 0
while max_num < 10 or max_num > 1000:
	max_num = int(input("Input: "))

print_primes(max_num)

