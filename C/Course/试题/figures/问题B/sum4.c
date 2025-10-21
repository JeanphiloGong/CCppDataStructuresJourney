#include <stdio.h>

int main() {
	int a, b;
	if (scanf("%d %d", &a, &b) != 2) {
		printf("Error: Invalid input\n");
		return 1;
	}

	int sum = a + b;
	printf("%d\n", sum);
	return 0;
}

