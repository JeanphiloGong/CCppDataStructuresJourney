// Write a program that will read C source code from the standard input and ensure that the braces are paired correctly. Note: you need not worry about vraces that appear within comments, string literals, or character constants.


#include <stdio.h>

int main() {
	int ch;
	int brace_count = 0;

	while ((ch = getchar()) != EOF) {
		if ( ch == '{') {
			++brace_count;
		} else if (ch == '}') {
			if (brace_count == 0) {
				printf("Error: Extra closing brace found!\n");
				return 1;
			}
			--brace_count;
		}
	}

	if (brace_count > 0) {
		printf("Error: %d opening brace(s) not closed!\n", brace_count);
		return 1;
	}

	printf("all braces are correctly paired.\n");
	return 0;
}

