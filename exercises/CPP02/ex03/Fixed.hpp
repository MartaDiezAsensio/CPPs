#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <string>
# include <cmath>

class	Fixed {
	private:
		int					_value;
		static const int	_frac;
	
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &copy);
		~Fixed(void);

		Fixed	&operator=(Fixed const &copy);

		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		float	operator+(const Fixed &fixed) const;
		float	operator-(const Fixed &fixed) const;
		float	operator*(const Fixed &fixed) const;
		float	operator/(const Fixed &fixed) const;

		Fixed	operator++();
		Fixed	operator--();

		Fixed	operator++(int);
		Fixed	operator--(int);

		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed	&min(Fixed &first, Fixed &second);
		static const Fixed	&min(Fixed const &first, Fixed const &second);
		static Fixed	&max(Fixed &first, Fixed &second);
		static const Fixed	&max(Fixed const &first, Fixed const &second);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif
