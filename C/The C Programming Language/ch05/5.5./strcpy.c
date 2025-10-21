#include <stdio.h>

/* my_strcpy: copy t to s; array subscript version */
void my_strcpy(char *s, const char *t)
{
	int i = 0;
	while ((s[i] = t[i]) != '\0')
	{
		i++;
	}
}

int main(void)
{
	char source[] = "Hello, World!";
	char destination[50]; // Ensure the destination array is large enough
			      //
	my_strcpy(destination, source);

	printf("copied string: %s\n", destination);
	
	return 0;
}
