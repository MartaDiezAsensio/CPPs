#include "Fixed.hpp"

#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define RED     "\033[31m"

int	main(void) {
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << BOLD << RED << a << RESET << " - a initial value" << std::endl;
	std::cout << BOLD << RED << ++a << RESET << " - ++a value" << std::endl;
	std::cout << BOLD << RED << a << RESET << " - a after ++a" << std::endl;
	std::cout << BOLD << RED << a++ << RESET << " - a++ value" << std::endl;
	std::cout << BOLD << RED << a << RESET << " - a after a++" << std::endl;

	std::cout  << BOLD << RED << b << RESET << " - b initial value" << std::endl;

	std::cout << BOLD << RED << Fixed::max(a, b) << RESET << " - max of a and b" << std::endl;
	std::cout << BOLD << RED << Fixed::min(a, b) << RESET << " - min of a and b" << std::endl;

	return (0);
}
