/*
 * The C Programming Language 2ed. ANSIc
 * chapter01, page020, program020, 1.10.c
 * -------------------------------------
 * write a program to copy its input to its output, replacing each tab,
 * backspace, and backlash with their escape character, this make escape chars
 * visible in an unambiguous way
 */

#include <stdio.h>

int main(void) {
	int c = 0;

	printf("Write a line to replace escape characters:");

	do {
		c = getchar();

		if (c == '\t') {
			putchar('\\');
			putchar('t');
			continue;
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
			continue;
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
			continue;
		}

		putchar(c);

	} while (c != '\n');

	printf("\n");

return 0;
}

