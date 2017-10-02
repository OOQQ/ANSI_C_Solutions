/* solution by OOQQ
 * The C Programming Language 2ed. ANSIC
 * chapter01, page013, program006, 1.3.c
 * -------------------------------------
 * modify the temperature conversion program to print a heading above the table
 */

#include <stdio.h>

int main(void) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahrenheit  to  Celsius.\n");
	printf("========================\n\n");

	while (fahr <= upper) {
		celsius = (5.0f / 9.0f) * (fahr - 32.0f);
		printf("%3.0fFº\t\t%6.1fCº\n", fahr, celsius);
		fahr = fahr + step;
	}

return 0;
}

