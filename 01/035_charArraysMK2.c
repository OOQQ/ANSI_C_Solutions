/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page032, program035, printLongestLineMK2.c
 * -------------------------------------
 * prints longest input line, specialized version
 */

#include <stdio.h>

#define MAXLINE 1000			/* maximum input line size */

int max;						/* maximum lenght seen so far */
char line[MAXLINE];				/* current input line */
char longest[MAXLINE];			/* longest line saved here */

int getline(void);
void copy(void);

/* print longest input line, specialized version */
int main(void) {
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while ((len = getline()) > 0) {
		if (len > max) {
			max = len;
			copy();
		}
	}

	if (max > 0) {				/* there was a line */
		printf("%s, longest");
	}

return 0;
}

/*  getline: specialized version */
int getline(void) {
	int i, c;
	extern char line[];

	for (i = 0; i < MAXLINE -1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';

return i;
}

/* copy specialized version */
void copy(void) {
	int i;
	extern char line[], longest[];

	i = 0;
	while ((longest[i] = line[i]) != '\0') {
		++i;
	}

return;
}

