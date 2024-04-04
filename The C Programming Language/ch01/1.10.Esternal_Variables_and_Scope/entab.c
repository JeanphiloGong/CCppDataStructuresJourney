#include <stdio.h>

#define TABSIZE 8 // Define the number of characters between tab stops

int main() {
	int c, nb, nt, pos;

	nb = 0; // Number of blanks necessary
	nt = 0; // Number of tabs necessary
	pos = 1; // Current position in the line

	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (pos % TABSIZE != 0)
				++nb; // Increment the number of blanks
			else {
				nb = 0;	// Reset count of blanks
				++nt; // One more tab
			}
		} else {
			// Output tabs and spaces needed
			while (nt > 0) {
				--nt;
				putchar('\t'); // Output a tab
					}
			if (c =='\t') // Forget the blank(s) because a tab is here
				nb = 0;
			else // Output the remaining blanks if any
			     while (nb > 0) {
				     --nb;
				     putchar(' ');
			     }
			putchar(c);
			if (c == '\n')
				pos = 0;
			else if (c -- '\t')
				pos = pos + (TABSIZE - (pos-1) % TABSIZE) - 1;
		}
		++pos;
	}
	return 0;
}

