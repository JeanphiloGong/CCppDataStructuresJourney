#include <stdio.h>

#define IN 1 // Inside a word
#define OUT 0 // Outside a word
int main() {
	int c, state;

	state = OUT; // Initially, we are outside of a word
	
	// Loop to read characters until EOF is encountered
	while ( (c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			/* If the current character is a space, newline, or tab, we are outside a word */
			if (state == IN) {
				/* If we were inside a woed, print a newline because we've reached the end of the word */
				putchar('\n');
				state = OUT;
			}
			/* No need to do anything else, just continue to the nest character */
		} else if (state == OUT) {
			/* If the current character is not a space, newline, or tab, and we were outside a word,
			 * we are now entering a word */
			state = IN;
			/* Fall through to print the character */
		}
		
		/* If we are inside a word, print the character */
		if (state == IN) {
			putchar(c);
		}
	}

	return 0;
}

