#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_RESET "\x1b[0m"
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

	int k, power, divisor;
	double dividend, total = 0;

	std::cout << ANSI_COLOR_GREEN;
	std::cout << std::endl << "4 * (-1)^k + 1";
	std::cout << std::endl << "    ----------  =";
	std::cout << std::endl << "      2k - 1";
	std::cout << std::endl << "4 * (";
	for (k = 1; k < 1000000; ++k) {

		power = k + 1;
		dividend = pow(-1, power);
		divisor = (2 * k) - 1;
		total += 4 * (dividend / divisor);

		if (dividend > 0) std::cout << " + " << dividend << " / " << divisor;
		else {
			std::cout << " - 1 / " << divisor;
		}
	}
	std::cout << ") = " << std::fixed << std::setprecision(2) << total;
	std::cout << ANSI_COLOR_RESET;
	std::cout << std::endl << std::endl << std::endl
		<< std::endl << std::endl << std::endl;
	
	return 0;
}
