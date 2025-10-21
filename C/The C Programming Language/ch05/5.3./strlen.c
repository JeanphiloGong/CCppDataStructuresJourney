#include <stdio.h>

/* str_len: return length of string */
int str_len(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}

int main()
{
	char str[] = "Hello, World!";
	int length;

	length = str_len(str);

	// Print the length of the string
	printf("The length of the string \"%s\" is %d.\n", str, length);

	return 0;
}

