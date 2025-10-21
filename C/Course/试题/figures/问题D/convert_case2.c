#include <stdio.h>
#include <ctype.h>

int main() {
	char c;
	scanf("%c", &c);

	if (isupper(c)) {
		c = tolower(c);
	}

	printf("%c", c);
	return 0;
}
