#include <stdio.h>
#include <string.h>

int strindex(char s[], char t[]) {
	int s_len = strlen(s);
	int t_len = strlen(t);
	int i, j, k;

	// Start form the last possible start position of t in s
	for (i = s_len - t_len; i>= 0; i--) {
		for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++) {
			; // Empty loop body
		}
		if (k > 0 && t[k] == '\0') {
			return i; // Found t in s
		}
	}
	return -1; // No t found in s
}

int main() {
	char s[] = "example.exe test.exe";
	char t[] = "exe";
	int position = strindex(s, t);

	if (position >= 0) {
		printf("The righrmost occurence of '%s' in '%s' is at positon %d\n", t, s, position);
	} else {
		printf("The string '%s' is not found in '%s'\n", t, s);
	}

	return 0;
}
