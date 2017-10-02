/* solution by OOQQ
 * The C Programming Language 2ed. ANSIC
 * chapter01, page008, program003, 1.2.c
 * -------------------------------------
 * experiment what happens when you try to printf something \x character
 */

#include <stdio.h>

int main(void) {

  printf("\a\b\c\d\e\f\g\h\i\j\k\l\m\n\o\p\q\r\s\t\u\v\w\x\y\z \n");

return 0;
}

/* main.c:12:10: warning: unknown escape sequence: '\c'
 * main.c:12:10: warning: unknown escape sequence: '\d'
 * main.c:12:10: warning: unknown escape sequence: '\g'
 * main.c:12:10: warning: unknown escape sequence: '\h'
 * main.c:12:10: warning: unknown escape sequence: '\i'
 * main.c:12:10: warning: unknown escape sequence: '\j'
 * main.c:12:10: warning: unknown escape sequence: '\k'
 * main.c:12:10: warning: unknown escape sequence: '\l'
 * main.c:12:10: warning: unknown escape sequence: '\m'
 * main.c:12:10: warning: unknown escape sequence: '\o'
 * main.c:12:10: warning: unknown escape sequence: '\p'
 * main.c:12:10: warning: unknown escape sequence: '\q'
 * main.c:12:10: warning: unknown escape sequence: '\s'
 * main.c:12:10: error: incomplete universal character name \u
 * main.c:12:10: warning: unknown escape sequence: '\w'
 * main.c:12:10: error: \x used with no following hex digits
 * main.c:12:10: warning: unknown escape sequence: '\y'
 * main.c:12:10: warning: unknown escape sequence: '\z'
 */

