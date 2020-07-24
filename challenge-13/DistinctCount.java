/*
* Java Program to print the count of distinct elements
* in an input array
* Input Constraint: 5 <= arraySize <= 100
* 0 <= elementValue <= 100
*/

import java.util.Scanner;

public class DistinctCount {

	final int FREQUENCY_SIZE = 101;
	private int[] frequency = new int[FREQUENCY_SIZE];

	private int countDistinct(int[] array) {
		int index;
		int distinctCount = 0;

		// generate frequency table by incrementing each element's
		// frequency stored at index same as element
		for (int i = 0; i < array.length; i++) {

			index = array[i];
			frequency[index]++;
		}

		// If element occurs once, it's distinct
		for (int i = 0; i < FREQUENCY_SIZE; i++) {
			if (frequency[i] == 1) {
				distinctCount++;
			}
		}

		return distinctCount;
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		// Class object for accessing non-static members
		DistinctCount distinct = new DistinctCount();

		int arraySize;

		// Repeatedly input size until constraint satisfied
		do {
			System.out.print("Input size: ");
			arraySize = scanner.nextInt();
		} while (arraySize < 5 || arraySize > 100);

		int[] inputArray = new int[arraySize];

		System.out.println("Input array elements: ");

		// Input array, re-input out of bound values
		// by resetting i to previous index
		for (int i = 0; i < arraySize; i++) {
			System.out.print("Input element " + i +": ");
			inputArray[i] = scanner.nextInt();

			if (inputArray[i] > 100) {
				System.out.println("Error: Max Element Value = 100");
				i -= 1;
			} else if (inputArray[i] < 0) {
				System.out.println("Error: Min Element Value = 0");
				i -= 1;
			}
		}

		System.out.println("Distinct Count: " + distinct.countDistinct(inputArray));
	}
}