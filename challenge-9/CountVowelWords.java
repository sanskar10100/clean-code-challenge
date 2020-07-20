/*
* Java program to count the number of words in an input
* string that start with a vowel
* Input constraint: maximum string size = 500
*/

import java.util.Scanner;

public class CountVowelWords {

	// Count the number of variabls 
	private void countVowelWords(String check_string) {

		int vowelCount = 0;

		// Generate a list of words, split on the basis of ' '
		String[] listOfWords = check_string.split(" ", 0);

		// Check for each word in the list
		for (String word : listOfWords) {

			// Skip if extra space
			if (word.length() == 0) {
				continue;
			}

			// If character at 0th index of word is vowel
			if (isVowel(word.charAt(0)))
			{
				vowelCount++;
			}
		}

		System.out.println("Count: " + vowelCount);
	}

	// Returns true if param is vowel
	boolean isVowel(char letter) {

		// Convert to lower case to check capitalised letters too
		switch (Character.toLowerCase(letter)) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': return true;
			default: return false;
		}
	}


	// Driver code
	public static void main(String[] args) {

		// Scanner object for input
		Scanner scanner = new Scanner(System.in);

		System.out.print("Input String: ");
		String string = scanner.nextLine();


		// Throw error if input constraint violated
		assert string.length() > 500: "Invalid size of input string";

		// Class object for accessing member
		CountVowelWords count = new CountVowelWords();

		count.countVowelWords(string);
	}
}