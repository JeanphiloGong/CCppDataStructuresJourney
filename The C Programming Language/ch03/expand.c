// Exercise 3-3 Write a function expand(s1, s2) that expands shorthand notations lake a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or training -is taken literally.

/* STEPS:
 * 1.Initialize variables: Start by setting up index variables for both the input ('s1') and output ('s2') strings
 * 2.Literate through 's1': Loop through each character in 's1' using a 'for' loop
 * 3.Check for shorthand notation within the loop, check if a character is followed by a hyphen ('-') and another character. This sequence ('a-b') indicates a shorthand notation
 * 4.Determine if expansion is needed: If such a pattern is founc, check if the characters surrounding the hyphen are in ascending order and whether they are both digits, both uppercase letters, or both lowercase letters, This ensures that the shorthand like 'a-z' is valid for expansion
 * 5.perform the expansion: If the pattern is valid for expansion, use a nested loop to add all intermidiatte characters between the two surrounding characters to 's2'
 * 6.Handle Literal Hyphens: If a hyphen is found at the beginning or end of 's1', or if the shorthand notation is invalid, treat the hyphen as literal chatacter and copy it directly to 's2'
 * 7. Handle Other Characters: For all others cases, simplt copy the current character from 's1' to 's2'
 * 8. Terminate the 's2' String: After the loop completes, ensure 's2' is properly null-terminated
 */

#include <stdio.h>

void expand(char s1[], char s2[]) {
	int i, j, c;

	for (i = j = 0; s1[i] != '\0'; ++i) {
		if (s1[i] == '-' && i > 0 && s1[i+1] != '\0') {
			int start = s1[i-1] + 1; // Start from the next character
			int end = s1[i+1]; // End at the character after '-'
			if (start < end) {
				for (c = start; c < end; ++c) {
					s2[j++] = c;
				}
				i++; // Ski[ the next character since it's part of the range
			} else {
				// If the reange is invalid or '-' is literal, just copy '-'
				s2[j++] = s1[i];
			}
		} else{
			// Copy the character as is
			s2[j++] = s1[i];
		}
	}
		s2[j] = '\0'; // Null-terminate the string
	}

int main() {
	char s1[] = "a-z";
	char s2[100];
	expand(s1, s2);
	printf("Expanded: %s\n", s2);

	char s3[] = "-a-z0-9-";
	char s4[100];
	expand(s3, s4);
	printf("Expanded: %s\n", s4);

	return 0;
}

