#include <ctype.h>
#include <stdio.h>

#define BEFSIZE 100

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

/* getgloat: get next floating-point number from input into *pn */
int getfloat(float *pn) {
	int c, sign;
	float power;

	while (isspace(c = getch())) /* skip white space */
		;
	if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.') {
		ungetch(c); /* it is not a number */
		return 0;
	}

	sign = (c == '-') ? -1 : 1;
	if (c == '+' || c == '-') {
		int next = getch();
		if (!isdigit(next) && next != '.') { // if next character is not a digit ot '.'
			ungetch(next);
			ungetch(c);
			return 0;
		}
		c = next;
	}
	for (*pn = 0.0; isdigit(c); c = getch())
		*pn = 10.0 * *pn + (c - '0');
	if (c == '.') {
		c = getch();
		for (power = 1.0; isdigit(c); c = getch()) {
			*pn = 10.0 * *pn + (c - '0');
			power *= 10.0;
		}
		*pn /= power;
	}

	*pn *= sign;
	if (c != EOF)
		ungetch(c);
	return c;
}

int main() {
	float n;
	int result;
	while ((result = getfloat(&n)) != EOF) {
		if (result > 0)
			printf("You entered the number: %f\n", n);
		else
			printf("Not a number\n");
	}
	return 0;
}
