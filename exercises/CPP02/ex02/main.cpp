#include "Fixed.hpp"

int	main(void) {
	Fixed	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << "a initial value\n" << std::endl;
	std::cout << ++a << "++a value\n" << std::endl;
	std::cout << a << "a after ++a\n" << std::endl;
	std::cout << a++ << "a++ value\n" << std::endl;
	std::cout << a << "a after a++\n" << std::endl;

	std::cout << b << "b initial value\n" << std::endl;

	std::cout << Fixed::max(a, b) << "max of a and b\n" << std::endl;
	std::cout << Fixed::min(a, b) << "min of a and b\n" << std::endl;

	return (0);
}
