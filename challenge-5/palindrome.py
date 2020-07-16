# Python3 program to check whether input num
# is palindromic or not
# Input Constraint: Greater than 0

# Returns reverse of the param num
def reverse(original_num):
	reverse_num = 0

	# Generate reversed number by shiffting digits place and adding
	# last digit of original number
	while original_num != 0:
		reverse_num = (reverse_num * 10) + (original_num % 10)

	return reverse_num


# Returns true if param num is palindrome
def is_palindrome(num):

	# Palindromic numbers are same as themselves in reverse
	if reverse(num) == num:
		return True
	else:
		return False


# Global, execute first

num_to_check = 0

# Input constraint
while num_to_check < 1:
	num_to_check = int(input("Input: "))

if is_palindrome(num_to_check):
	print("Palindrome")
else:
	print("Not Palindrome")

