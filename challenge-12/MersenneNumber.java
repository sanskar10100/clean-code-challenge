/*
* Java program to check whether input is a
* Mersenne Number or not
* Input Constraint: 0 < Input <= 15000
*/

import java.util.Scanner;

public class MersenneNumber {

	// Returns true if param is prime
	private boolean isPrime(int number) {

		if (number == 1) {
			return false;
		}

		// Find any divisor between 2 and sqrt of number
		// if none found, number is prime
		for (int i = 2; i <= (int) Math.sqrt(number); i++) {
			if (number % i == 0) {
				return false;
			}
		}

		return true;
	}

	// Returns true if param is Mersenne
	private boolean isMersenne(int checkNumber) {

		// generate log base 2
		float decimalLog = (float) Math.log(checkNumber + 1) / (float) Math.log(2);
		
		// If log base 2 of checkNumber + 1 is integer, then that
		// number is Mersenne Number
		if (decimalLog == (int) decimalLog) {
			return true;
		} else {
			return false;
		}
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		// Class object for accessing non-static members
		MersenneNumber number = new MersenneNumber();

		int inputNum;

		// Input until constraint satisfied
		do {
			System.out.print("Input: ");
			inputNum = scanner.nextInt();
		} while (inputNum < 0 || inputNum > 15000);

		if (number.isPrime(inputNum)) {
			if (number.isMersenne(inputNum)) {
				System.out.println(inputNum + " is a Mersenne Number");
			} else {
				System.out.println(inputNum + " is not a Mersenne Number");
			}
		} else {
			System.out.println(inputNum + " is not a Mersenne Number");
		}
	}
}