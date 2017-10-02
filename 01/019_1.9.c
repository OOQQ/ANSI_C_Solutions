/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page020, program019, 1.9.c
 * -------------------------------------
 * write a program to copy its input to its output, replacing each string of one
 * or more blanks by a single blank
 */

#include <stdio.h>

int main(void) {
	int c = 0, flag = 0;

	printf("Write a line with lots of whitespace:");

	do {
		c = getchar();

		if (flag && c != ' ') {
			flag = 0;
		}

		if (flag && c == ' ') {
			do {
				c = getchar();
			} while (c == ' ');
			flag = 0;

		} else if (c == ' ')  {
			flag++;
		}

		putchar(c);

	} while (c != '\n');

	printf("\n");

return 0;
}
