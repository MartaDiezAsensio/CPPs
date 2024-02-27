#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed() : _value(0) {
	std::cout << "Contructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Fixed copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other) {
	std::cout << "Fixed Assigntion operator called" << std::endl;
	if (this != &other) {
		this->_value = other.getRawBits();
	}
	return (*this);
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getter function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits( int const raw) {
	std::cout << "setter function called" << std::endl;
	this->_value = raw;
}
