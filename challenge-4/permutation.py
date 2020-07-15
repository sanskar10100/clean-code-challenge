# Python3 Program to find the output of the nPr permutation
# function. nPr = n! / (n - r)! Input Constraints: 
# 2 <= n <= 20
# 0 <= r < n

# Return true if input constraint satisfied
def check_input_constraint(n, r):

	# Statement on RHS becomes true of false. False means
	# constraint violated. True means satisfied.
	n_constraint = (n >= 2) and (n <= 20)

	# Statement of RHS becomes true or false. False if
	# constraint is violated.
	r_constraint = (r >= 0) and (r < n)

	# If both are true, constraint satisfied.
	# else violated.
	if n_constraint and r_constraint:
		return True
	else:
		return False


# Return factorial of param
def factorial_of(num):

	factorial = 1
	for number in range(2, num + 1):
		factorial *= number

	return factorial


# Global, execute first

n = int(input("Input n: "))
r = int(input("Input r: "))

# If input constraint is false, then exit with abnormal
# status code (1)
if check_input_constraint == False:
	print("Error: Input Constraint Violated")
	exit(1)

result = factorial_of(n) / factorial_of(n - r)

print(f'{n}P{r} = {result}')
