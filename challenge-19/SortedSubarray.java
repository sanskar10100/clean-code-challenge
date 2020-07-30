/*
* Java program to generate and print the sorted subarray
* from an input array
* Input Constraint:
* array_size >= 5
* subarray_lower_bound >= 0
* subarray lower_bound <= subarray_upper_bound < array_size
*/

import java.util.Scanner;
import java.util.Arrays;

public class SortedSubarray {

	// Returns sorted subarray from param array
	private static int[] getSortedSubarray(int[] array, int lowerBound, int upperBound) {

		int subarraySize = upperBound - lowerBound + 1;

		int[] subarray = new int[subarraySize];

		// Generate subarray
		for (int i = 0, j = lowerBound; i < subarraySize && j <= upperBound; i++, j++) {
			subarray[i] = array[j];
		}

		Arrays.sort(subarray);

		return subarray;
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		int arraySize;

		// Satisfy size input constraint
		do {
			System.out.print("Input size: ");
			arraySize = scanner.nextInt();
		} while (arraySize < 5);

		int[] array = new int[arraySize];

		System.out.println("Input array:");

		// Read array
		for (int i = 0; i < arraySize; i++) {
			array[i] = scanner.nextInt();
		}

		int lowerBound, upperBound;

		System.out.print("Input array lower bound: ");
		lowerBound = scanner.nextInt();

		System.out.print("Input array upper bound: ");
		upperBound = scanner.nextInt();

		// Input Constraint Violated
		if (lowerBound < 0 || (upperBound < lowerBound || upperBound >= arraySize)) {
			System.out.println("Input Constraint Violated");
			System.exit(1);
		}

		int[] sortedSubarray = getSortedSubarray(array, lowerBound, upperBound);

		System.out.print("Sorted Subarray: ");

		// Print sorted subarray
		for (int element : sortedSubarray) {
			System.out.print(element + " ");
		}

		// newline
		System.out.println();

	}
}