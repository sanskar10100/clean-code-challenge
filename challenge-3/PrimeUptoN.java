/*
* Java Program to print all primes upto input num
* Input Constraint: Between 10 and 1000 (inclusive)
*/

// Scanner object to take input
import java.util.Scanner;

public class PrimeUptoN {

	private int max_num;

	// Return true if param is prime
	boolean isPrime(int check_num) {

		int iterate_upto = (int) Math.sqrt(check_num);
		// If at least one divisor found between 2
		// and sqrt(num), not prime.
		for (int divisor = 2; divisor <= iterate_upto; divisor++) {
			if (check_num % divisor == 0){
				return false;
			}
		}

		// No divisor found, is prime
		return true;
	}

	// Print space seperated primes upto max_num
	void print_primes() {
		
		// Print primes from 2 to max
		for (int num = 2; num <= max_num; num++) {
			if (isPrime(num)) {
				System.out.print(num + " ");
			}
		}

		// newline
		System.out.print("\n");
	}

	// Driver code
	public static void main(String[] args) {
		
		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		// Class object for accessing non-static fields
		// and methods
		PrimeUptoN number = new PrimeUptoN();

		// Iterate until input constraint satisfied
		do {
			System.out.print("Input: ");
			number.max_num = scanner.nextInt();
		} while (number.max_num < 10 || number.max_num > 1000);

		number.print_primes();
	}
}
