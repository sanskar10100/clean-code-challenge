/*
* Java program to print the largest element
* of an integer array
* Input Constraint: size_of_array >= 5
*/

import java.util.Scanner;

public class LargestElement {

	// Returns the largest element from the array
	static int find_largest(int[] array) {
		
		// Assume largest to be 0
		int largestElement = array[0];

		for (int arrayElement : array) {
			
			// If arrayElement is greater than current
			// value of largest element, replace.
			if (largestElement < arrayElement) {
				largestElement = arrayElement;
			}
		}

		return largestElement;
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		int arraySize;

		// Repeatedly take input until constraint satisfied
		do {
			System.out.print("Input size: ");
			arraySize = scanner.nextInt();
		} while (arraySize < 5);

		int[] array = new int[arraySize];

		System.out.println("Input array: ");

		// Read array
		for (int i = 0; i < array.length; i++) {
			array[i] = scanner.nextInt();
		}

		System.out.println("Largest element: " + find_largest(array));

	}
}