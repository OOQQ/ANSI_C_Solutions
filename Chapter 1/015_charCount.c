/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page018, program015, charCount.c
 * -------------------------------------
 * count characters in input, 1st version
 */

#include <stdio.h>

int main(void) {
	long nc;

	nc = 0;
	while (getchar() != EOF ) {
		++nc;
		printf("%ld\n", nc);
	}

return 0;
}

