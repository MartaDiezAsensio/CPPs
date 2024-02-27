#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
	private:
		int					_fix_value;
		static const int	_frac_bits;

	public:
		Fixed();
		Fixed(const Fixed &copy);

		~Fixed();

		Fixed	&operator=(const Fixed &other);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw);
};

#endif
