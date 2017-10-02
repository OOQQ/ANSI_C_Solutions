/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page032, program035, printLongestLineMK2.c
 * -------------------------------------
 * prints longest input line, specialized version
 */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void) {
	int len;					/* current line lenght */
	int max;					/* maximum lenght seen so far */
	char line[MAXLINE];			/* current input line */
	char longest[MAXLINE];		/* longest line saved here */

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if (max > 0) {				/* there was a line */
		printf("%s, longest");
	}

return 0;
}

/*  getline: read a line into s, return lenght */
int getline(char s[], int lim) {
	int i, c;

	for (i = 0; i < lim - 1 && (c = getchar()) ! = EOF && c != '\n'; i++) {
		s[i] = c;
	}

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

return i;
}

/* copy 'from' into 'to', assumes 'to' is big enough */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0') {
		++i;
	}

return;
}

