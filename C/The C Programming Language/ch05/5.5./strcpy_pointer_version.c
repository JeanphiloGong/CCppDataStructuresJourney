#include <stdio.h>
#include <string.h>

/* my_strcpy: copy t to s; pointer version */
void my_strcpy(char *s, const char *t)
{
	while ((*s = *t) != '\0') {
		s++;
		t++;
	}
}

int main(void)
{
	char source[] = "Hello, World!";
	char destination[50]; // Ensure the destination array is large enough

	my_strcpy(destination, source);

	printf("Copied string: %s\n", destination);

	return 0;
}
