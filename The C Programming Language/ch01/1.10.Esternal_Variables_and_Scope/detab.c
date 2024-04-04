#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 1000 // Maximum input line size

// Prototype declarations
int getLine(char line [], int maxline);
void detab(char to[], char from[], int tabWidth);


int main(int argc, char *argv[]) {
	char line[MAXLINE]; // current input line
	char detabbedLine[MAXLINE]; // line with tabs replaced by spaces

	int tabWidth = 4; // Default tab width
	if (argc >  1) {
		tabWidth = atoi(argv[1]); // Set tab width from command line argument
	}

	while (getLine(line, MAXLINE) > 0) {
		detab(detabbedLine, line, tabWidth);
		printf("%s", detabbedLine);
	}
	return 0;
}


// getLine: read a line intos , return length
int getLine(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// detab: replace rabs in 'from' with spaces in 'to'; assume 'to' is big enough
void detab(char to[], char from[], int tabWidth) {
	int i, j, k;

	for (i = j = 0; from[i] != '\0'; i++) {
		if (from[i] == '\t') {
			int spaceCount = tabWidth - (j % tabWidth);
			for (k = 0; k < spaceCount; k++, j++) {
				to[j] = ' ';
			}
		} else {
			to[j] = from[i];
			j++;
		}
	}
	to[j] = '\0';
}















