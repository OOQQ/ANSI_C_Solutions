/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page019, program017, lineCounting.c
 * -------------------------------------
 * the next program count input lines
 */

#include <stdio.h>

int main(void) {
	int c, n1;

	n1 = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			n1++;
		}
	}

	printf("%d\n", n1);

return 0;
}

