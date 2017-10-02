/* solution by OOQQ
 * The C Programming Language 2ed. ANSIc
 * chapter01, page015, program010, fahCelsiusWithDefine.c
 * -------------------------------------
 * print Fahrenheith-Celsius table with #define preprocessor macros
 */

#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */

int main(void) {
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d %6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32));
	}

return 0;
}

