/*
* Java program to rotate the elements of an array by a certain
* number of positions.
* Input Constraint: size >= 5
* position < size
*/

import java.util.Scanner;
import java.util.ArrayList;

public class RotateArray {

	private static void rotate(ArrayList<Integer> array, int position) {

		int element, lastIndex;
		
		// Removes the last element in each iteration and adds
		// to the beginning
		for (int i = 0; i < position; i++) {
			lastIndex = array.size() - 1;
			element = array.remove(lastIndex);
			array.add(0, element);
		}
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

		// Input array, or rather ArrayList
		ArrayList<Integer> array = new ArrayList<Integer>();

		// Read array
		System.out.println("Input array:");

		for (int i = 0; i < arraySize; i++) {
			array.add(scanner.nextInt());
		}

		int position;

		// Satisfy position input constraint
		do
		{
			System.out.print("Input position: ");
			position = scanner.nextInt();
		} while (position > arraySize);

		rotate(array, position);

		System.out.print("Rotated Array: ");

		// Print the rotated array
		for (int element : array) {
			System.out.print(element + " ");
		}

		System.out.println();
	}
}