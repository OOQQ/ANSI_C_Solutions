/* solution by OOQQ
 * The C Programming Language 2ed. ANSIC
 * chapter01, page013, program007, 1.4.c
 * -------------------------------------
 * modify the temperature conversion program to print a Cº to Fº table
 */

#include <stdio.h>

int main(void) {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	printf("Celsius  to  Fahrenheit.\n");
	printf("========================\n\n");

	while (celsius <= upper) {
		fahr = ((celsius * 9.0f) / 5.0f + 32.0f;
		printf("%3.0fCº\t\t%6.1fFº\n", celsius, fahr);
		celsius = celsius + step;
	}

return 0;
}

