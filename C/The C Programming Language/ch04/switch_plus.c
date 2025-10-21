#include <stdio.h>
#include <stdlib.h> 
#include <ctype.h>

#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
#define MAXVAL 100 /* maximum depth of val stack */

int sp = 0; /* next free stack position */
double val[MAXVAL]; /* value stack */

int getop(char s[]);
void push(double);
double pop(void);

/* reverse Polish calculator */
int main() {
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}

void push(double f) {
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

double pop(void) {
	if (sp > 0)
		return val[--sp];
	else {
		printf("error: stack empty\n");
		return 0.0;
	}
}

int getop(char s[]) {
	int i, c;

	while ((s[0] = c = getchar()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; // Not a number
	i = 0;
	if (isdigit(c)) // Collect integer part
		while (isdigit(s[++i] = c = getchar()))
			;
	if (c == '.') // Collect fraction part
		while (isdigit(s[++i] = c = getchar()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetc(c, stdin);
	return NUMBER;
}

