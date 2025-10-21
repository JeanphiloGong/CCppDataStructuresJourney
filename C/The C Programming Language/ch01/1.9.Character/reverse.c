#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size*/

int getLine(char line[], int maxline);
void reverse(char s[]);

/* reverse input lines a line at a time */
int main() {
	char line[MAXLINE]; /* current input line */

	while (getLine(line, MAXLINE) > 0) {
		reverse(line);
		printf("%s", line);
	}
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] =c;
	}
	if ( c== '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* reverse: reverse string s in place */
void reverse(char s[])  {
	int i, j;
	char temp;

	// Find the length of the string
	for (j = 0; s[j] != '\0'; ++j)
		;
	j--; // Decrement j to skip the null terminator

	// Reverse the string
	for (i = 0; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		if (s[i] == '\n') { // If we're reversing lines, keep the newline at the end
			s[i] = s[j-1];
			s[j-1] = '\n';
		}
		s[j] = temp;
	}
}
