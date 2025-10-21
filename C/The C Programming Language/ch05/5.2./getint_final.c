#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE]; // Buffer for ungetch
int bufp = 0; // next free position in buf
	      //
int getch(void) {
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) {
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}

/* getint: get next integer from input into *pn */
int getint(int *pn) {
	int c, sign;

	while (isspace(c = getch())) /* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* it is not a number */
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-')
		c = getch();
	if (!isdigit(c)) { // ensure the next character is a digit
		ungetch(c);
		return 0;
	}
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}

int main() {
	int n;
	int result;

	while ((result = getint(&n)) != EOF) {
		if (result > 0)
			printf("You entered the number: %d\n", n);
		else
			printf("Not a number\n");
	}
	return 0;
}


