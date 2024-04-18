#include <ctype.h>
#include <stdio.h>

int atof(char s[])
int get_line(char s[], int lim);

/* atof: convert string s to double*/
double atof(char s[]) {
	double val, power;
	int i, sign;

	// Skip leading whitespace
	for (i = 0; isspace(s[i]); i++)
		;

	// Check the sign of the number
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;

	// Convert the integer part of the number
	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');

	// process the fractional part, if present
	if (s[i] == '.')
		i++;
	for (power = 1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}

	// Return the converted number
	return sign * val / power;
}

#define MAXLINE 100

/* get_line: read a line into s, return length */
int get_line(char s[], int lim) {
	int c, i;

	i = 0;
	while (--lim > 0 && (c = getchar()) != EOF && c!= '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/* redimentary calculator */
int main() {
	double sum;
	char line[MAXLINE];

	sum = 0;
	while (get_line(line, MAXLINE) > 0)
		printf("\t%g\n", sum += atof(line));
	return 0;

}
