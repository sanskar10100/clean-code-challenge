/*
* Java Program to check whether input is a perfect
* number or not
* Input Constrained between 3 and 4999 (inclusive)
*/

import java.util.Scanner;

public class Perfect {

	private int number_to_check;

	// Returns true if number_to_check is perfect
	private boolean isPerfect() {

		int sum_of_divisors = 0;

		// Iterate from 1 to exactly half of the number
		for (int i = 1; i <= (int) (number_to_check / 2); i++) {
			if (number_to_check % i == 0) {
				sum_of_divisors += i;
			}
		}

		if (number_to_check == sum_of_divisors) {
			return true;
		}
		else
		{
			return false;
		}
	}

	// Driver code
	public static void main(String[] args) {
		// Define Scanner object for taking input
		Scanner scanner = new Scanner(System.in);

		// Class object, because static methods can't access
		// non-static method directly.
		Perfect perfect = new Perfect();

		// Iterate and prompt until the constraint
		// is satisfied.
		do {
			System.out.print("Input: ");
			perfect.number_to_check = scanner.nextInt();
		} while (perfect.number_to_check <= 2 || perfect.number_to_check >= 5000);

		if (perfect.isPerfect()) {
			System.out.println(perfect.number_to_check + " is a perfect number");
		} else {
			System.out.println(perfect.number_to_check + " is not a perfect number");
		}
	}
}
