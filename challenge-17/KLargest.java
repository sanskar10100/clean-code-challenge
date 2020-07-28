/*
* Java program to print the kth largest element
* from an input array
* Input Constraint:
* arraySize <= 5
* k <= arraySize
*/

import java.util.Scanner;
import java.util.Arrays;

public class KLargest {

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

		int k;
		// Satisfy k input constraint
		do {
			System.out.print("Input k: ");
			k = scanner.nextInt();
		} while (k > arraySize);

		Arrays.sort(array);

		// In sorted list, size - k yields the required element.
		System.out.println("kth largest element is: " + array[arraySize - k]);

	}
}