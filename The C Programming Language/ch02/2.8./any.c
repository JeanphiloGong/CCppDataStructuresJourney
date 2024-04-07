// Write the function any(s1, s2), which returns the first location in a string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.) 

/* Steps
 * 1.Iterate over each character in 's1'.
 * 2.For each character in 's1', check if it is presentin 's2'
 * 3.If a character from 's1' is found in 's2', return its position(index) in 's1'.
 * 4.If no characters from 's1' are found in 's2', return -1
 */

#include <stdio.h>

// Function to search for any character of s2 in s1
int any(char s1[], char s2[]) {
	int i, j;
	// Iterate over each character in s1
	for (i = 0; s1[i] != '\0'; i++) {
		// For each character in s1, check against all cahracters in s2
		for (j = 0; s2[j] != '\0'; j++) {
			// If a match is found, return the current position in s1
			if (s1[i] == s2[j]) {
				return i; // Returning the index (position)
			}
		}
	}
	// If no character from s2 is found in s1, return -1
	return -1;
}

int main() {
	char s1[] = "example";
	char s2[] = "a";
	printf("First location of any character from s2 in s1; %d\n", any(s1, s2));

	// Test with a case where no characters match
	char s3[] = "xyz";
	printf("First location of any character from s3 in s1: %d\n", any(s1, s3));

	return 0;

}

