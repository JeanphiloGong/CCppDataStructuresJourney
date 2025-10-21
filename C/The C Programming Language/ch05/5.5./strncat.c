#include <stdio.h>

char *strncat(char *s, const char *t, size_t n) {
	char *start = s;

	// Move s to the end of the string
	while (*s) {
		s++;
	}

	// Copy at most n characters from t
	while (n > 0 && * t != '\0') {
		*s = *t;
		s++;
		t++;
		n--;
	}

	// Null-terminate the result
	*s = '\0';

	return start;
}

int main() {
	char s[20] = "Hello, ";
	char t[] = "World!";
	strncat(s, t, 3);
	printf("Result of strncat: '%s'\n", s); // Output: "hello, wor"
	return 0;
}

