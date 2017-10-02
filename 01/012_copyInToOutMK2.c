/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page017, program012, copyInToOutMK2.c
 * -------------------------------------
 * copy input to output 2st version
 */

#include <stdio.h>

int main(void) {
	int c;

	while ((c getchar()) != EOF) {
		putchar(c);
	}

return 0;
}

