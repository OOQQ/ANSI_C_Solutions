/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page024, program025, 1.13.c
 * -------------------------------------
 * write a program to print a histogram of the lenghts of words in its input,
 * horizontal = ez, vertical = op
 */

#include <stdio.h>

int main(void) {
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; i++) {
		ndigit[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			++ndigit[c-'0'];
		} else if ( c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}

	printf("digits =");

	for (i = 0; i < 10; i++) {
		printf(" %d", ndigit[i]);
	}

	printf(", whitespace =) %d, other = %d\n", nwhite, nother);

return 0;
}

