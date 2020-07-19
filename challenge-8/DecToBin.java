/* 
* Java program to convert a decimal number into a
* binary number and print it
* Input Constraint: decimal number > 7
*/

import java.util.Scanner;

public class DecToBin {

	// Convery decimal input to binary
	private static void decimalToBinary(int decimal_num) {

		// log2 N = log10 N / log10 2
		// Find the number of bits required to represent
		// var decimal_num in binary
		int size = 1 + (int) (Math.log(decimal_num) / Math.log(2));

		int[] binaryNum = new int[size];
		int count = 0;

		// Generate and store binary pattern by taking
		// remainder and divising by 2 each time
		while (decimal_num != 0) {
			binaryNum[count] = decimal_num % 2;
			decimal_num /= 2;
			count++;
		}

		System.out.print("Binary: ");

		// Print binaryNum in reverse
		for (int i = size - 1; i >= 0; i--) {
			System.out.print(binaryNum[i]);
		}

		// newline
		System.out.println();
	}

	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		int decimal_num;
		System.out.print("Input decimal num: ");

		// Prompt for input until constraint satisfied
		do {
			decimal_num = scanner.nextInt();
		} while (decimal_num < 8);

		decimalToBinary(decimal_num);
	}
}