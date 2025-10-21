#include <stdio.h>

int main() {
	int a, b ,c;
	scanf("%d, %d, %d", &a, &b, &c);

	int max = a;
	
	printf("max=%d\n", max);

	if (b > max) {
		max = b;
	}
	printf("max=%d\n", max);
	if (c > max) {
		max = c;
	}
	printf("max=%d\n", max);

	return 0;
}
