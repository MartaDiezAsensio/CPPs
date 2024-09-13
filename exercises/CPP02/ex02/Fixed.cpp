#include "Fixed.hpp"

const int	Fixed::_frac = 8;

Fixed::Fixed(void) : _value(0) {
	std::cout << "Fixed object created with default constructor" << std::endl;
}

Fixed::Fixed(const int value) {
	this->_value = value << this->_frac;
	std::cout << "Fixed object created with int constructor" << std::endl;
}

Fixed::Fixed(const float value) {
	this->_value = roundf(value * (1 << this->_frac));
	std::cout << "Fixed object created with float constructor" << std::endl;
}

Fixed::~Fixed(void) {
	std::cout << "Fixed object destructed" << std::endl;
}

Fixed::Fixed(Fixed const &copy) {
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}



Fixed	&Fixed::operator=(Fixed const &copy) {
	std::cout << "Assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}



bool	Fixed::operator>(Fixed fixed) const {
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(Fixed fixed) const {
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(Fixed fixed) const {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(Fixed fixed) const {
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(Fixed fixed) const {
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(Fixed fixed) const {
	return (this->getRawBits() != fixed.getRawBits());
}



float	Fixed::operator+(Fixed fixed) const {
	return (this->toFloat() + fixed.toFloat());
}

float	Fixed::operator-(Fixed fixed) const {
	return (this->toFloat() - fixed.toFloat());
}

float	Fixed::operator*(Fixed fixed) const {
	return (this->toFloat() * fixed.toFloat());
}

float	Fixed::operator/(Fixed fixed) const {
	return (this->toFloat() / fixed.toFloat());
}

float	Fixed::toFloat(void) const {
	return (this->_value / (float)(1 << this->_frac));
}

int		Fixed::toInt(void) const {
	return (this->_value >> this->_frac);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second) {
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(Fixed const &first, Fixed const &second) {
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second) {
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(Fixed const &first, Fixed const &second) {
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}



Fixed	Fixed::operator++() {
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator--() {
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;
	++this->_value;
	return (tmp);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;
	--this->_value;
	return (tmp);
}



int		Fixed::getRawBits(void) const {
	return (this->_value);
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}



std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr) {
	return (str << fixed_nbr.toFloat());
}
