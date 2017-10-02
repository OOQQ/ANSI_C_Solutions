/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page014, program009, 1.5.c
 * -------------------------------------
 * modify the temperature conversion program to print the table in reverse order
 * for 300 to 0
 */

#include <stdio.h>

int main(void) {
	int fahr;

	for (fahr = 300; fahr >= 0; fahr = fahr - 20) {
		printf("%3d %6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32));
	}

return 0;
}

