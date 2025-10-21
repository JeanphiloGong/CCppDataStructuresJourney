#include <stdio.h>

/* my_strcmp: return <0 if s<t, 0 if s==t, >0 if s>t */
int my_strcmp(const char *s, const char *t)
{
	int i;
	for (i = 0; s[i] == t[i]; i++) {
		if (s[i] == '\0')
			return 0;
	}
	return s[i] - t[i];
}

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hell0";
	char str3[] = "World";

	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, my_strcmp(str1, str2));
	printf("Comparing \"%s\" and \"%s\": %d\n", str1, str3, my_strcmp(str1, str3));
	printf("Comparing \"%s\" and \"%s\": %d\n", str3, str1, my_strcmp(str3, str1));

	return 0;
}
