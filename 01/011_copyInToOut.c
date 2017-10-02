/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page016, program011, copyInToOut.c
 * -------------------------------------
 * copy input to output 1st version
 */

#include <stdio.h>

int main(void) {
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

return 0;
}

