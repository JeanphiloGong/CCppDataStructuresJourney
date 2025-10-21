#include <stdio.h>
#include <string.h>

/* my_my_strcpy: copy t to s; pointer version 2 */
void my_strcpy(char *s, char *t)
{
	while ((*s++ = *t++) != '\0')
		;
}

int main(void)
{
	char source[] = "Hello World!";
	char destination[50]; // Ensure the destination array is larger enough
	
	my_strcpy(destination, source);

	printf("Copied string: %s\n", destination);

	return 0;
}
