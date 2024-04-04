#include <stdio.h>

int main() {
	int c;

	/* Loop to read characters until EOF is encountered */
	while ((c = getchar()) != EOF) {
		/* Check for specific characters and replace them accordingly */
		if (c == '\t') {
			/* If the character is a tab, output \t */
			printf("\\t");
		} else if (c == '\b') {
			/*If the character is a backspace, output \b
			 * Note: The backspace chatacter may not be handeld properly by all terminals/input methods when reading from stdin
			 */
			printf("\\b");
		} else if (c == '\\') {
			/* if the character is a backslash, output \\ */
			printf("\\\\");
		} else {
			/* For all other characters, output them as they are */
			putchar(c);
		}
	}

	return 0;
}
