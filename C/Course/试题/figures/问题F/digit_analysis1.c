#include <stdio.h>
#include <string.h>


int main() {
	char input[6];
	scanf("%s", input);

	int length = strlen(input);
	printf("%d\n", length);

	for (int i = 0; i < length; i++) {
		printf("%c ", input[i]);
	}

	printf("\n");

	for (int i = length - 1; i >= 0; i--) {
		printf("%c ", input[i]);
	}
	printf("\n");

	return 0;
}
