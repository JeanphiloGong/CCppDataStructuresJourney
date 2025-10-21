// main.c
#include <stdio.h>
#include "increment.h"
#include "negate.h"

int main() {
	int numbers[] = {10, 0, -10};
	for(int i = 0; i < 3; i++){
		printf("Original: %d, Incremented: %d, Negated: %d\n",
				numbers[i], increment(numbers[i]), negate(numbers[i]));
	}
	return 0;
}

