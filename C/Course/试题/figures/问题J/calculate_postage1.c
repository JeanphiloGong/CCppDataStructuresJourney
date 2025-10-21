#include <stdio.h>

int main() {
	int weight;
	char urgent;

	scanf("%d %c", &weight, &urgent);

	int cost = 8;

	if (weight > 1000) {
		int extraWeight = weight - 1000;
		int extraCost = ((extraWeight + 499) / 500) * 4;
		printf("%d\n", extraCost);
		cost += extraCost;
	}

	if (urgent == 'y') {
		cost += 5;
	}

	printf("%d\n", cost);

	return 0;
}


