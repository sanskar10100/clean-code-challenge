/*
* Java program to check whether the input num
* is abundant, perfect or deficient
* Input Constraint: 10 <= input_num <= 2000
*/

import java.util.Scanner;

public class NumberType {

	// Returns the type of number through integers
	private static int checkNumberType(int checkNumber) {

		int sumOfDivisors = 1;

		// Find and add together all the proper divisiors
		// of checkNumber
		for (int num = 2; num <= checkNumber / 2; num++) {
			if (checkNumber % num == 0) {
				sumOfDivisors += num;
			}
		}

		// Greater than 0: abudant
		// Equal to 0: perfect
		// Less than 0: deficient
		return (sumOfDivisors - checkNumber);
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		int inputNumber;

		// Repeatedly input till constraint satisfied
		do {
			System.out.print("Input: ");
			inputNumber = scanner.nextInt();
		} while (inputNumber < 10 || inputNumber > 2000);

		if (checkNumberType(inputNumber) > 0) {
			System.out.println(inputNumber + " is an abudant number");
		} else if (checkNumberType(inputNumber) == 0) {
			System.out.println(inputNumber + " is a perfect number");
		} else if (checkNumberType(inputNumber) < 0) {
			System.out.println(inputNumber + " is a deficient number");		
		}
	}
}