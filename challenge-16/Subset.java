/*
* Java program to input 2 arrays
* and check whether the 2nd is a subset of the
* first
* Input Constraint: size >= 2
*/

import java.util.Scanner;
import java.util.Set;
import java.util.HashSet;

public class Subset {

	// Driver code
	public static void main(String[] args) {
		
		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		int size1, size2;

		System.out.print("Input array 1 size: ");
		size1 = scanner.nextInt();

		System.out.print("Input array 2 size: ");
		size2 = scanner.nextInt();

		// Exit if input cosntraint violated
		if (size1 < 2 || size2 < 2) {
			System.out.println("Error: Min Size 2");
			System.exit(1);
		}

		Set<Integer> set1 = new HashSet<Integer>();
		Set<Integer> set2 = new HashSet<Integer>();

		System.out.println("Input array 1:");

		// Input 1st array and store in HashSet
		for (int i = 0; i < size1; i++) {
			set1.add(scanner.nextInt());
		}

		System.out.println("\nInput array 2:");

		// Input 2nd array and store in HashSet
		for (int i = 0; i < size2; i++) {
			set2.add(scanner.nextInt());
		}

		// If set1 contains all elements of set 2
		if (set1.containsAll(set2)) {
			System.out.println("2nd array is a subset of the first");
		} else {
			System.out.println("2nd array is not a subset of the fist");
		}

	}
}