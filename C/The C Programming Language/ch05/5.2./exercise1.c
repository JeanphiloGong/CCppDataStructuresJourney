#include <ctype.h>
#include <stdio.h>

#define BUFSIZE 100

char buf[BUFSIZE]; // Buffer for ungetch
int bufp = 0; // next free position in buf


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
	if (c == '+' || c == '-') {
		int next = getch();
		if (!isdigit(next)) { // if next character is not a digit
			ungetch(next); // push back the character
			ungetch(c); // push back the sign character
			return 0; // not a valid number
			}
		c = next;
	}
	for (*pn = 0; isdigit(c); c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c!= EOF ? 1 : EOF; // Return 1 if valid integer read, EOF otherwise
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

