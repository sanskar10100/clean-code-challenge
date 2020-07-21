/*
* Java program to merge two sorted arrays and print them
* Input constraint: Min array size = 5
* Exit if either array isn't sorted
*/

import java.util.Scanner;
import java.util.InputMismatchException;

public class MergeSorted {

	// Return true if param array is sorted
	private boolean isSorted(int[] array) {

		// If a single element out of place, array unsorted
		for (int i = 0; i < array.length - 1; i++) {
			if (array[i] > array[i + 1]) {
				return false;
			}
		}

		return true;
	}

	// Merge and print resultant of two sorted arrays
	private void mergeSortedArrays(int[] array1, int array2[]) {
		
		// index for respective arrays
		int i = 0, j = 0, k = 0;

		int array3[] = new int[array1.length + array2.length];

		while (k < array3.length) {

			// Store the smaller of the element at two matching
			// indices in array 1 and 2
			if (array1[i] <= array2[j]) {
				array3[k] = array1[i];
				i++;
			} else {
				array3[k] = array2[j];
				j++;
			}

			k++;

			// If array 1 or 2 is finished, add the rest
			// of the elements of the other array
			if (i == array1.length) {
				while (j < array2.length) {
					array3[k] = array2[j];
					j++;
					k++;
				}
				break;

			} else if (j == array2.length) {
				while (i < array1.length) {
					array3[k] = array1[i];
					i++;
					k++; 
				}	
				break;
			}
		}

		// Print the merge array
		System.out.print("Merged Array: ");
		for (int element : array3) {
			System.out.print(element + " ");
		}

		// newline
		System.out.println();
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		// Class object for accessing non-static members
		MergeSorted merge = new MergeSorted();

		int size1, size2;

		// Input size1 until constraint satisfied
		do {
			System.out.print("Enter size for array 1: ");
			size1 = scanner.nextInt();
		} while (size1 < 5);

		// // Input size2 until constraint satisfied
		do {
			System.out.print("Enter size for array 2: ");
			size2 = scanner.nextInt();
		} while (size2 < 5);

		int[] array1 = new int[size1];
		int[] array2 = new int[size2];

		// Input array 1
		System.out.println("Enter elements for array 1: ");
		for (int i = 0; i < size1; i++) {
			array1[i] = scanner.nextInt();
		}

		// Input array 2
		System.out.println("Enter elements for array 2: ");
		for (int i = 0; i < size2; i++) {
			array2[i] = scanner.nextInt();
		}

		if (merge.isSorted(array1) && merge.isSorted(array2)) {
			merge.mergeSortedArrays(array1, array2);
		} else {
			throw new InputMismatchException("Input Array not sorted");
		}
	}
}