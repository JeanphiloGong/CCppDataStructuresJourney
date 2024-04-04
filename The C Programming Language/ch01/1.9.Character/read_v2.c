#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define LIMIT 80 /* minimum line size to print */

int getLine(char line[], int maxline);

/* print input lines longer than LIMIT characters */
int main() {
	int len; /* current line length */
	char line[MAXLINE]; /* current input line */

	while ((len = getLine(line, MAXLINE)) > 0) {
		if (len > LIMIT) {
			printf("%s", line);
		}
	}
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
