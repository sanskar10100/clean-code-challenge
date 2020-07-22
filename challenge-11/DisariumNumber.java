/*
* Java program to check whether input number
* is a disarium number or not
* Input Constraint: > 0
*/

import java.util.Scanner;

public class DisariumNumber {

	// Returns true if param is a disarium number
	private static boolean isDisariumNumber(int checkNumber) {

		int digitCount = String.valueOf(checkNumber).length();
		// Degree is the place of the digit in number
		// Degree of last digit = total num of digits
		int resultant = 0, digit, degree = digitCount, copy = checkNumber;

		// Assume checkNumber = 175
		// Degree(1) = 1, Degree(7) = 2, Degree(5) = 3
		// Make degree that digit's exponent, and add
		// total to resultant
		while (checkNumber != 0)
		{
			digit = checkNumber % 10;
			resultant += Math.pow(digit, degree);
			degree -= 1;
			checkNumber /= 10;
		}

		if (copy == resultant) {
			return true;
		} else {
			return false;
		}
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		int inputNumber;

		// Input till constraint satisfaction
		do
		{
			System.out.print("Input: ");
			inputNumber = scanner.nextInt();
		} while (inputNumber < 1);

		if (isDisariumNumber(inputNumber)) {
			System.out.println(inputNumber + " is a Disarium Number");
		} else {
			System.out.println(inputNumber + " is not a Disarium Number");
		}
	}
}