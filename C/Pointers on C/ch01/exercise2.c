/* Write a program that reads lines from the standard input. Each line is printed on the standard output preceded by its line number. Try to write the program so that it has no buile-in limit on how long a line it can handle.
 */

#include <stdio.h>
#include <stdlib.h>


int main() {
	char *line = NULL; // Pointer to the buffer, initially NULL
	size_t len = 0; // Size of the buffer, initially 0
	ssize_t read;
	int line_number = 1;

	// Loop until getline returns -1 (end of file)
	while ((read = getline(&line, &len, stdin)) != -1) {
		// Print line number and the line; note: read includes the nuewline character
		printf("%d: %s", line_number, line);
		line_number++;
	}

	// Free the allocated buffer
	free(line);

	return 0;
}
