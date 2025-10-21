#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	// Limits from the headers
	printf("limits form the header: \n");
	printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
	printf("unsinged char : 0 to %u\n", UCHAR_MAX);
	printf("short: %d ot %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short: 0 to %u\n", USHRT_MAX);
	printf("int: %d to %d\n", INT_MIN, INT_MAX);
	printf("unsigned int : 0 to %u\n", UINT_MAX);
	printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned long: 0 to %lu\n", ULONG_MAX);
	printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
	printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
	printf("long double: %Le to %Le\n", LDBL_MIN, LDBL_MAX);

	// Direct computation for integer types (demonstration for unsigned char and short_
	printf("\nDirect computation (demonstration for unsigned char and short):\n");
	printf("unsigned char: 0 to %u\n", (unsigned char)(~0));
	printf("short: %d to %d\n", -(short)((unsigned short)~0 >> 1) -1, (short)((unsigned short)~0 >> 1));

	// Note: Computing the ranges for floating-point types directly is significantly more complex
	// and not as straightforward as for integer types, due to their representation in memory
	// Thefore, for floating-point types, relying on <float.h> is the practical approach.
	

	return 0;
}
