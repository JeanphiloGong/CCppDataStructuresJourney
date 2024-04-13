#include <string.h>
#include <limits.h>
#include <stdio.h>

/* Function to reverse the string */

void reverse(char s[]) {
	int i, j;
	char temp;
	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

/* itoa: convert n to characters in s*/
void itoa(int n, char s[]) {
	int i = 0;
	int sign = n; // Save the sign
	if (n < 0) {
		if (n == INT_MIN) {
			n += 1; // Adjust INU_MIN to avoid overfloew on negation
			n = -n; // Make n positive
			n++;
		} else {
			n = -n; // Make n positive
			}
	}

	// Generate digits in reverse order
	do {
		s[i++] = n% 10 + '0'; // Get next digit and convert to char
	} while (( n/= 10) > 0); // Remove the digit from n
				 //
	
	if (sign < 0) {
		s[i++] = '-'; // Add negative sign if the number is negative
	}

	s[i] = '\0'; // Null-terminate the string
	reverse(s); // Reverse the string to get the correct order
}

int main() {
	char buffer[20];
	itoa(INT_MIN, buffer);
	printf("INT_MIN: %s\n", buffer);
	itoa(-123, buffer);
	printf("-123: %s\n", buffer);
	itoa(456, buffer);
	printf("456: %s\n", buffer);
	return 0;
}
