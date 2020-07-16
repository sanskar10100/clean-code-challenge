/*
* Java Program to check whether the input number is
* palindromic or not
* Input Constraint: Greater than 0
*/

// Scanner object for input
import java.util.Scanner;

public class Palindrome {

	private int num_to_check;
	private int reverse_num = 0;

	// Generates reversed number and stores in
	// reverse_num field
	void reverse() {

		int temp = num_to_check;

		// Shift reverse_num by digit place, then add last
		// digit of original number to reverse
		while (temp != 0) {
			reverse_num = (reverse_num * 10) + (temp % 10);
			temp /= 10;
		}
	}

	// Returns true if num_to_check field is palindromic
	boolean isPalindrome() {
		// Generate reversed number
		reverse();

		// A number is palindrome if its reverse is equal to
		// the number itself
		if (num_to_check == reverse_num) {
			return true;
		} else {
			return false;
		}
	}

	// Driver code
	public static void main(String[] args) {
		
		// Scanner object for taking input from stdin
		Scanner scanner = new Scanner(System.in);

		// Class object for accessing non-static members
		Palindrome palindrome = new Palindrome();

		// Satisfy input constraint
		do {
			System.out.print("Input: ");
			palindrome.num_to_check = scanner.nextInt();
		} while (palindrome.num_to_check < 1);

		if (palindrome.isPalindrome()) {
			System.out.println("Palindrome");
		} else {
			System.out.println("Not Palindrome");
		}
	}
}