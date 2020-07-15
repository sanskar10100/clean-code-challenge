/*
* Java Program to find the output of the nPr permutation
* function. nPr = n! / (n - r)! Input Constraints: 
* 2 <= n <= 20
* 0 <= r < n
*/

// Scanner object required for input
import java.util.Scanner;

public class Permutation {

	// Returns true if input constraint is held
	// Returns false if input constraint violated
	private static boolean checkInputConstraint(int n, int r) {

		// Statement on RHS true if n constraint held
		boolean n_constraint = (n >= 2) && (n <= 20);

		// Statement on RHS true if r constraint held
		boolean r_constraint = (r >= 0) && (r < n);

		// If both constraint vars true, then constraint
		// held, otherwise violated
		if (n_constraint && r_constraint) {
			return true;
		} else {
			return false;
		}
	}

	// Returns factorial of given param
	private static long factorialOf(int number) {
		long factorial = 1;

		for (int i = 2; i <= number; i++) {
			factorial *= i;
		}

		return factorial;
	}

	// Driver code
	public static void main(String[] args) {
		
		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		// Class object to access non-static fields and
		// methods from a static context
		Permutation permutation = new Permutation();

		int n, r;
		System.out.print("Input n: ");
		n = scanner.nextInt();

		System.out.print("Input r: ");
		r = scanner.nextInt();

		// Input constraint failed, exit with code 1
		if (checkInputConstraint(n, r) == false) {
			System.out.println("Error: Input Constraint Violated");
			System.exit(1);
		}

		// Generate output of nPr function.
		double result = (double) factorialOf(n) / factorialOf(n - r);

		System.out.print(n + "P" + r + " = " + result);
	}
}