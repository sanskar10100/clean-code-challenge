/*
* Java program to input a number of arrays
* and print whther each of them are sorted or not
* Input Constraint:
* 2 <= number_of_arrays <= 10
* 5 <= size_of_each_array <= 100
*/

import java.util.Scanner;
import java.util.ArrayList;

public class CheckSorted {

	// Returns true if param array is sorted
	private static boolean isSorted(int[] array) {

		// If even one element out of place, array not sorted
		for (int i = 0; i < array.length - 1; i++) {
			if (array[i] > array[i + 1]) {
				return false;
			}
		}

		return true;
	}

	// Returns an ArrayList containing all input arrays
	private static ArrayList<int[]> inputArrays(int numberOfArrays) {

		// Array object for holding input on each iter

		ArrayList<int[]> listOfArrays = new ArrayList<int[]>();

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		// Read each array and add to ArrayList
		for (int i = 0; i < numberOfArrays; i++) {

			int size;

			// Satisfy individual array size constraint
			do {
				System.out.print("Input array " + (i + 1) + " size: ");
				size = scanner.nextInt();
			} while (size < 5 || size > 100);

			int[] array = new int[size];

			System.out.println("Input array " + (i + 1) + " elements:");

			// Read array
			for (int j = 0; j < size; j++) {
				array[j] = scanner.nextInt();
			}

			// Store array in the ArrayList container
			listOfArrays.add(array);
		}

		return listOfArrays;
	}

	//  Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		int numberOfArrays;

		// Satisfy num of array input constraint
		do {
			System.out.print("Input number of arrays: ");
			numberOfArrays = scanner.nextInt();
		} while (numberOfArrays < 2 || numberOfArrays > 10);

		ArrayList<int[]> listOfArrays = inputArrays(numberOfArrays);

		// For each array in listOfArrays, check if it's sorted
		for (int i = 0; i < numberOfArrays; i++) {
			if (isSorted(listOfArrays.get(i))) {
				System.out.println("array " + (i + 1) + ": sorted");
			} else {
				System.out.println("array " + (i + 1) + ": not sorted");
			}
		}

	}
}