/*
* Java program to find the majority element
* in an input array
* Input Constraint: 5 <= arraySize <= 2000
* 0 <= elementValue <= 100
*/

import java.util.Scanner;

public class MajorityElement {

	private static int majorityElement(int[] originalArray) {
		final int FREQUENCY_SIZE = 101;
		int[] frequency = new int[FREQUENCY_SIZE];

		// Note: In Java, all array elements are automatically
		// initalised to 0

		int frequencyIndex;

		// Generate frequency array by incrementing index
		// mathcing each element in originalArray
		for (int i = 0; i < originalArray.length; i++) {
			frequencyIndex = originalArray[i];
			frequency[frequencyIndex] += 1;
		}

		int majoritySize = ((originalArray.length) / 2) + 1;

		// If any index where count is at least majority size,
		// return that index (matching element value).
		for (int i = 0; i < FREQUENCY_SIZE; i++) {

			if (frequency[i] >= majoritySize) {
				return i;
			}
		}

		// If none found
		return -1;
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for inpuu
		Scanner scanner = new Scanner(System.in);

		// Class object for accessing non-static members
		MajorityElement element = new MajorityElement();

		int arraySize;

		// Repeatedly input till constraint satisfied
		do {
			System.out.print("Input size: ");
			arraySize = scanner.nextInt();
		} while (arraySize < 5 || arraySize > 2000);

		int[] array = new int[arraySize];

		// Read array, re-read out of bound elements
		for (int i = 0; i < arraySize; i++) {
			do {
				System.out.print("Input element " + i + ": ");
				array[i] = scanner.nextInt();
			} while (array[i] < 0 || array[i] > 100);
		}

		int majorityNumber = majorityElement(array);

		if (majorityNumber == -1) {
			System.out.println("No majority element Found");
		} else {
			System.out.println(majorityNumber + " is the majority element");
		}
	}
}