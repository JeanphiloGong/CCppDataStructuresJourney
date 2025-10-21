#include<stdio.h>

#define IN 1 /* inside a word */
#define OUT 0 /* outside a woed */

/* count lines, words, and characters in input */
int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar() ) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("The number of newline: %d\n The number of words: %d\n The number of characters: %d\n", nl, nw, nc);
}

