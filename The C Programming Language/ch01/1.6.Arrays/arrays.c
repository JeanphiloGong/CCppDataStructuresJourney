#include <stdio.h>

/* count digits, white space, others */
int
main()
{
	int c, i, nwhite, nother, nc;
	int ndigit[10];

	nwhite = nother = nc = 0;
	for ( i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while ( (c = getchar()) != EOF) {
		++nc;
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if ( c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	}
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d, number of characters: %d\n",
			nwhite, nother, nc);
}

