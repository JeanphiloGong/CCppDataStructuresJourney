#include <stdio.h>

int strncmp(const char *s, const char *t, size_t n) {
	while (n >0 && *s != '\0' && *t != '\0') {
		if (*s != *t) {
			return *s - *t;
		}
		s++;
		t++;
		n--;
	}

	// If n is 0, strings are equal up to n characters
	if (n == 0) {
		return 0;
	}

	// If one string is shorter than the other
	return *s - *t;
}

int main() {
	char s[] = "Hello";
	char t[] = "Hell";
	printf("Result of strncmp: %d\n", strncmp(s, t, 4)); // Output: 0
	printf("Result of strncmp: %d\n", strncmp(s, t, 5)); // Output: '0'
	return 0;
}

