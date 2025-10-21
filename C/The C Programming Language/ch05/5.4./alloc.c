#include <stdio.h>

#define ALLOCSIZE 10000 /* size of available space */

static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf; /* next free position */

/*
 * alloc: return pointer to n characters
 * If there is enough space in allocbuf, the function will return
 * a pointer to the begining of the allocated space. If not,
 * it returns 0 (null pointer).
 */

char *alloc(int n) {
	if (allocbuf + ALLOCSIZE - allocp >= n) { /* it fits */
		allocp += n;
		return allocp - n; /* old p */
	} else { /* not enough room */
		return 0;
	}
}

/*
 * afree: free storage pointed to by p
 * If the pointer p is within the allocated buffer, it resets allocp
 * to p, effectively freeing all memory allocated after p.
 */

void afree(char *p) {
	if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
		allocp = p;
	}
}

int main() {
	char *p1, *p2;

	p1 = alloc(1000); // Allocate 1000 bytes
	if (p1 != 0) {
		printf("1000 bytes allocated\n");
	} else {
		printf("Allocation failed\n");
	}

	p2 = alloc(5000); // Allocate 5000 bytes
	if (p2 != 0) {
		printf("5000 bytes allocated\n");
	} else {
		printf("Allocation failed\n");
	}

	afree(p2); // Free the 5000 bytes
	printf("5000 bytes freed\n");

	p2 = alloc(6000); // Allocate 6000 bytes
	if (p2 != 0) {
		printf("6000 bytes allocated\n");
	} else {
		printf("Allocation failed\n");
	}

	afree(p1); // Free the 1000 bytes
	printf("1000 bytes freed\n");

	return 0;
}

