#include <stdio.h>

int main() {
	int c, lastC;

	lastC = EOF; /* Initialize lastC to EOF to handld the case where the first character is a blank*/

	/*Loop to read characters until EOF is encountered */
	while ((c = getchar()) != EOF) {
		/* If the current character is not a blank or the last character was not a blank, output it */
		if (c != ' ' || lastC != ' ') {
			putchar(c);
		}
		lastC = c; /* Update lastC to the currentcharacter after processing*/
	}

	return 0;
}

