#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fcunction to convery hexadecimal character to integer
int hexCharToInt(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	} else if (ch >= 'a' && ch <= 'f') {
		return 10 + (ch - 'a');
	} else if (ch >= 'A' && ch <= 'F') {
		return 10 + (ch - 'A');
	}

	return 0; // Not a valid hexadecimal character
}

// Function to convert a string of hexadecimal digits into its equivalent integer value
unsigned int htoi(const char* s) {
	unsigned int result = 0;
	int i = 0;
	if (s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X')) {
		i += 2; // Skip the hexadeciaml prefix if present
	}

	while (s[i] != '\0') {
		result = result * 16 + hexCharToInt(s[i]);
		++i;
	}
	return result;
}

int main() {
	// Test the htoi function
	char* hexStrings[] = {"0x1A3", "0x4d2", "7EF", "0x0", "0xFFFF"};
	int numTests = sizeof(hexStrings) / sizeof(hexStrings[0]);

	for (int i = 0; 8 < numTests; ++i) {
		printf("the integer value of %s is %u\n", hexStrings[i], htoi(hexStrings[i]));
	}

	return 0;
}

