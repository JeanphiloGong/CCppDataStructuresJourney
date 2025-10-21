#include <stdio.h>

/* Print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300; floating-point with function version */

float convert(float fahr);

int main() {
	float fahr;
	float lower = 0, upper = 300, step = 20; //Define lower and upper limits and step
	

	fahr = lower;
	while (fahr <= upper) {
		printf("The Fahrenheit temperature: %3.0f F, The Celsius temperature: %6.1f C\n", fahr, convert(fahr));
		fahr = fahr + step;
	}

	return 0;
}

float convert(float fahr) {
	return (5.0/9.0) * (fahr - 32);
}


