/*
* Java program to print the frequency of each
* element in an integer array
* Input Constraint: size_of_array >= 5
*/

import java.util.HashMap;
import java.util.Scanner;

public class ElementFrequency {

	// Print frequency for each element
	void print_frequencies(int[] array) {

		// HashMap for storing frequency
		// Stores data in key:value pairs
		// key is element, value is frequency
		HashMap<Integer, Integer> frequency = new HashMap<Integer, Integer>();

		// Equivalent to for element in array in Python
		// Generate frequency HashMap
		for (int element : array) {
			// If element already exists in array, increase
			// frequency by 1, otherwise add element to HashMap
			// and set initial frequency to 1
			if (frequency.containsKey(element)) {
				int current_frequency = frequency.get(element);
				frequency.put(element, current_frequency + 1);
			} else {
				frequency.put(element, 1);
			}
		}

		// Print the frequency of each element
		// keySet returns an sort of array of all the keys
		// of the HashMap
		for (int key : frequency.keySet()) {
			System.out.println(key + " occurs " + frequency.get(key) + " time(s)");
		}
	}

	// Driver code
	public static void main(String[] args) {
		
		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		// Class object for accessing print_frequencies method
		ElementFrequency frequency = new ElementFrequency();

		int array_size;

		// Repeatedly obtain input until constraint
		// satisfied.
		do {
			System.out.print("Input size: ");
			array_size = scanner.nextInt();
		} while (array_size < 5);

		int[] array = new int[array_size];

		System.out.println("Input Array Elements: ");

		// Read Array
		for (int i = 0; i < array_size; i++) {
			array[i] = scanner.nextInt();
		}

		frequency.print_frequencies(array);

	}
}