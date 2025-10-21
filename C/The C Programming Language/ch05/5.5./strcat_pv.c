#include <stdio.h>

void my_strcat(char *s, const char *t) {
	// Move to the end of the first string
	while (*s) {
		s++;
	}

	// Copy the second string to the end of the first string
	while (*t) {
		*s = *t;
		s++;
		t++;
	}

	// Null-terminate the concatenated string
	*s = '\0';
}

int main() {
	char s[100] = "Hello, ";
	char t[] = "world!";

	my_strcat(s, t);
	printf("%s\n", s); // Output: Hello, World!
			   //
	return 0;
}

