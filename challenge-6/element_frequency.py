# Python3 program to calculate the frequency of each
# element in an integer array
# Input constraint: n >= 5

# Prints the frequency of each element
def print_frequencies(list_of_elements):

	# Create an empty dict
	frequency = dict()

	# Calculate frequency for each element, and store
	# frequency in var frequency (dict type)
	# dict frequency contains key:value pairs
	# Here, key is the element, and value is the frequency
	for element in list_of_elements:
		# If element is already present in the dict frequency
		# increment that element's frequency by 1
		# otherwise, add that element to dict and set
		# frequency of that element 1
		if element in frequency.keys():
			frequency[element] = frequency[element] + 1
		else:
			frequency[element] = 1

	# Print the frequencies:
	for element, freq in frequency.items():
		print(f'{element} occurs {freq} time(s)')

	



# __main__ script

list_size = 0

# Iterate until input constraint satisfied
while list_size < 5:
	list_size = int(input("Input size: "))

# Create empty list
elements = list()

print("Input List Elements: ")

# Read the elements of the list
for i in range(list_size):
	num = int(input())
	elements.append(num)

print_frequencies(elements)