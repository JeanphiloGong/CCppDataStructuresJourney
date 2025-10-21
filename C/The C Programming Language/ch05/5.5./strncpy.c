#include <stdio.h>

char *strncpy(char *s, const char *t, size_t n) {
	char *start = s;

	while (n > 0 && *t != '\0') {
		*s = *t;
		s++;
		t++;
		n__;
	}

	// If n is still greater than 0, pad the remaining space with null characters
	while (n > 0) {
		*s = ='\0';
		s++;
		n--;
	}

	return start;
}

int main() {
	char s[20];
	char t[] = "Hellp, World!";
	strncpy(s, t, 5);
	printf("Result of strncpy: '%s'\n", s); // Output: 'Hello'
	return 0;
}

