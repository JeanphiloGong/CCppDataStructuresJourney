#include <stdio.h>
#include <string.h>

void squeeze(char s1[], const char s2[]) {
	int i, j, k;
	for (i = k = 0; s1[i] != '\0'; i++) {
		for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
			;
		if (s2[j] == '\0') // If the end of s2 is reached without a match
			s1[k++] = s1[i];
		}
	s1[k] = '\0'; // Null-terminate the modified string
}

int main() {
	char s1[100];
	char s2[100];

	// Input strings from the user
	printf("Enter first string (si); ");
	fgets(s1, sizeof(s1), stdin); // Read incluing spaces, stop at newline
	s1[strcspn(s1, "\n")] = 0; // Remove trailing newline
				   //
	
	printf("Enter second string (s2); ");
	fgets(s2, sizeof(s2), stdin);
	s2[strcspn(s2, "\n")] = 0; // Remove trailing newline
				   
	squeeze(s1, s2); // Call the squeeze function

	printf("Resulting strings:%s\n", s1); // Print the modified s1

	return 0;
}

