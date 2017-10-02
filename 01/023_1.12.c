/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page021, program023, 1.12.c
 * -------------------------------------
 * write a program that prints its input line, one word per line
 */

#include <stdio.h>

int main(void) {
	char c;

	printf("Write a line of text:");

	do {
		c = getchar();

		if (c == ' ') {
			putchar('\n');
			continue;
		}

		putchar(c);

	} while (c != '\n');

	printf("\n");

return 0;
}

