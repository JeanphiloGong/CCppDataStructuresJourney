// Write a function setbits(x, p, n, y) that return x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.

/* STEPS
 * 1.Isolate the tight most n bits of 'y': You can do this by performing 'y & !(!0 << n)'. This expression creates a mask with the rightmost 'n' bits set to 1(and the rest set to 0) and then applies this mask to 'y', leaving us with just the bits we're interested in.
 * 2.Shift these bits into correct position: Since these bits need to be inserted into 'x' starting at position 'p', you'll shift them to the left by '(p+1-n)' positions
 * 3.Create a mask to clear the target bits in 'x': To replace the bits in 'x', you first need to lcear them. Create a mask with 'n' bits set to 0 starting at position 'p'. This can be done by combining two masks: one with bits set to - from the right up to position 'p; and another with bits set to 1 from the right up to position '(p-n)
 * 4. Clear the bits in 'x': Apply the mask from step 3 to 'x' using the bitwise AND operation. This clears the 'n' bits at position 'p'
 * 5.Insert the bits from 'y' into 'x': Use the bitwise OR operation to insert the modified bits from 'y' (step 2) into 'x' (after clearing the bits in step4)
 */

#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y) {
	// Step 1: Isolate the rightmost n bits of y
	unsigned rightmostNbits = y & ~(~OU << n);

	// Step 2: Shift these bits to the correct position
	unsigned shiftedBits = rightmostNbits << (p+1-n);

	// Step 3: Create a mask to clear the target bits in x
	unsigned mask = ~((~(~ou << n)) << (p+1-n);

	// Step 4: Clear the bits in x
	unsigned cleardX = x & mask;

	// Step 5: Insert the bits from y into x
	unsigned result = clearedX | shiftedBits;

	return result;
	}

int main() {
	unsigned x = Ob11001010; // Example x
	int p =4;
	int n = 3;
	unsigned y = Ob10110111; // Example y
	
	// Applying setbits
	unsigned result = setbits(x, p, n, y);
	printf("Result: %u (binary: %b)\n", result, result);

	return 0;
}
