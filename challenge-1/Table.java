/*
* Java Program to print multiplicative table
* of input number.
* Input constrained between 2 and 15 (inclusive)
*/

import java.util.Scanner;

class Table {
	int number;

	// Prints table upto 10
	void print_table() {
		for (int i = 1; i <= 10; i++) {
			System.out.println(number + " x " + i +
				" = " + number * i);
		}
	}

	// Driver code
	public static void main(String[] args) {
		
		// Declare Scanner class object to take input
		// from keyboard. System.in is the standard input
		Scanner scanner = new Scanner(System.in);

		// Declare new object of Table type
		Table table = new Table();

		System.out.print("Input: ");
		// Take integer input from the keyboard
		// using the scanner object, and store in
		// object table's instance variable number
		table.number = scanner.nextInt();

		// Check input condition
		if (table.number >= 2 && table.number <= 15) {
			table.print_table();
		}
	}
}
