#include <stdio.h>
#include <string.h>

int strend(const char *s, const char *t) {
	int len_s = strlen(s);
	int len_t = strlen(t);

	// If t is longer than s, it cannot be at the end of s
	if (len_t > len_s) {
		return 0;
	}

	// Compare the end of s with t
	s += (len_s - len_t); // Move pointer s to the point where t should start
			      //
	while (*s) {
		if (*s != *t) {
			return 0; // Characters do not match
		}
		s++;
		t++;
	}

	return 1; // All characters match
}

int main() {
	char s[] = "Hello, World!";
	char t1[] = "World!";
	char t2[] = "Hello";

	printf("Result for 'World!': %d\n", strend(s, t1)); // Output: 1
	printf("Result for 'Hello': %d\n", strend(s, t2)); // Output: 0
	
	return 0;
}

