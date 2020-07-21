# Python3 program to merge and print two previously sorted lists
# Input Constaint: Min array size = 5
# Exit if either array unsorted

# Returns true if param list is sorted
def is_sorted(check_list):
	# If a single element out of place, return false
	for i in range(len(check_list) - 1):
		if check_list[i] > check_list[i + 1]:
			return False
	else:
		return True

# Merge sorted arrays and print resutl
def merge_sorted_lists(list_1, list_2):

	# Respective indices for two lists
	i = j = 0

	list_3 = list()

	while i < len(list_1) or j < len(list_2):
		
		# Add smaller item of two indices for list
		# 1 and 2 to the new list
		if list_1[i] <= list_2[j]:
			list_3.append(list_1[i])
			i += 1
		else:
			list_3.append(list_2[j])
			j += 1

		# If either of the list is finished, fill the
		# remaining elements of the other list to new list
		if i == len(list_1):
			while j < len(list_2):
				list_3.append(list_2[j])
				j += 1
			break
		
		elif j == len(list_2):
			while i < len(list_1):
				list_3.append(list_1[i])
				i += 1
			break

	# Print resultant list
	print("Merged List: ", end="")
	for item in list_3:
		print(item, end=" ")

	# newline
	print()


# __main__ script

size_1 = size_2 = 0

# Input size_1 until input constraint satisfied
while size_1 < 5:
	size_1 = int(input('Enter size for list 1: '))

# Input size_2 until input constraint satisfied
while size_2 < 5:
	size_2 = int(input('Enter size for list 2: '))

list_1 = list()
list_2 = list()

print('Enter elements for list 1: ')
for i in range(size_1):
	num = int(input())
	list_1.append(num)

print('Enter elements for list 2: ')
for i in range(size_2):
	num = int(input())
	list_2.append(num)

# Exit if either array unsorted
if is_sorted(list_1) and is_sorted(list_2):
	merge_sorted_lists(list_1, list_2)
else:
	raise Exception('Input Array Not Sorted')