#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	private:
		int					_value;
		static const int	_frac;

	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &copy);

		Fixed	&operator=(const Fixed &other);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif
