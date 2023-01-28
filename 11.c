#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"
#include <stdio.h>
#include <math.h>

int main() {
	
	int k, power, divisor;
	double dividend, total = 0;

	printf(ANSI_COLOR_GREEN);
	printf("\n4 * (-1)^k + 1");
	printf("\n    ----------  =");
	printf("\n      2k - 1");
	printf("\n4 * (");
	for (k = 1; k <= 1000000; k++) {

		power = k + 1;
		dividend = pow(-1, power);
		divisor = (2 * k) - 1;
		total += 4 * (dividend / divisor);

		if (dividend > 0) printf(" + %.lf / %d", dividend, divisor);
		else {
			printf(" - 1 / %d", divisor);
		}
	}
	printf(") = %.2lf", total);
	printf(ANSI_COLOR_RESET);
	printf("\n\n\n\n\n\n");
	return 0;
}
