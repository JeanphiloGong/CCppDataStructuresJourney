/* Character Counting*/

#include <stdio.h>

/* count characters in input; lst version */
int main()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}

