/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page020, program018, 1.8.c
 * -------------------------------------
 * write a program to count blanks, tabs & newlines
 */

#include <stdio.h>

int main(void) {
	int tab = 0, blank = 0 newline = 0;

	printf("Write some stuff (# to terminate):");

	while ((c = getchar()) != '#') {
		if (c == '\t') {
			tab++;
		} else if (c == ' ') {
			blank++;
		} else if (c == '\n') {
			newline++;
		}
	}

	printf("There are %d tabs, %d blanks, and %d newlines in your input.\n", tab, blank, newline);

return 0;
}

