/* solution by OOQQ
 * The C Programming Language 2ed. ANSIC
 * chapter01, page009, program004, fahToCelsius.c
 * -------------------------------------
 * prints a Fahrenheit-Celsius table
 * for fahr = 0, 20 ... 300
 */

#include <stdio.h>

int main(void) {
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}

return 0;
}

