# Python3 program to print table of a given 
# number (between 2 and 15)

# Prints table of given number upto 10
def print_table(number):
	for i in range(1, 11):
		print(f'{number} x {i} = {number * i}')


# Global code, equivalent to main in C/C++
num = int(input("Input: "))

# Check input condition
if num >= 2 and num <= 15:
	print_table(num)
