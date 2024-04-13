#include <string.h>
#include <stdio.h>
int trim(char s[]);

int main() {
	char str[] = "  Hell0, World!  \n";
	printf("original string: '%s'\n", str);

	int new_length = trim(str);
	printf("Trimmed string: '%s'\n", str);
	printf("New length: %d\n", new_length);

	return 0;
}


/* Trims trailing spaces, tabs, and newlines from a string and returns the new length. */
int trim(char s[])
{
	int n;

	// Check if the string is empty
	if (s == NULL || s[0] =='\0')
		return 0;

	// Find the last character not to be trimmed
	for (n = strlen(s) - 1; n>=0; n--) {
			if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
				break;
	}

	// Terminate the string after the last non-trimmable character
	s[n + 1] = '\0';

	// Return the new length of the string
	return n + 1;
}

