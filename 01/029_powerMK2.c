/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page027, program029, powerMK2.c
 * -------------------------------------
 * raise base to n-th power n >= 0; MK2
 */

#include <stdio.h>

int power(int m, int n);

int main(void) {
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d %d %d\n", i, power(2,i), power(-3,i));
	}

return 0;
}

/* power: raise base to n-th power; n >= 0 MK2 */
int power(int base, int n) {
	int p;

	for (p = 1; n > 0; --n) {
		p = p * base;
	}

return p;
}

