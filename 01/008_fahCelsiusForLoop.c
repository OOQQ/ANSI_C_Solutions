/* solution by OOQQ
 * The C Programming Language 2ed. ansiC
 * chapter01, page013, program008, fahToCelsiusForLoop.c
 * -------------------------------------
 * print a Fahrenheit-Celsius table with a for loop
 */

#include <stdio.h>

int main(void) {
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		printf("%3d %6.1f\n", fahr, (5.0f / 9.0f) * (fahr - 32));
	}

return 0;
}

