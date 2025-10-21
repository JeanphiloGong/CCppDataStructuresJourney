#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char input[1000];
	while (fgets(input, sizeof(input), stdin)) {
		input[strcspn(input, "\n")] = 0;
	
		int number = atoi(input);
		if (number == 0 && input[0] != '0') {
			break;
		}

		int digits[10];
		int count = 0;

		do {
			digits[count++] = number % 10;
			number /= 10;
		} while (number > 0);

		for (int i = 0; i < count; i++) {
			if (i > 0) {
				printf(",");
			}
			printf("%d", digits[i]);
		}
		printf("\n");
	}
	return 0;
}
