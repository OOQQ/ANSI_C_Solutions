/* solution by OOQQ
 * The C Programming Language 2ed. ANSIC
 * chapter01, page012, program005, fahToCelsiusImproved.c
 * -------------------------------------
 * prints a Fahrenheit-Celsius table
 * for fahr = 0, 20 ... 300, floating-point version
 */

#include <stdio.h>

int main(void) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0f / 9.0f) * (fahr - 32.0f);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

return 0;
}

