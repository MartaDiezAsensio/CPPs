#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	private:
		int					_value;
		static const int	_frac;
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed(void);
		Fixed(Fixed const &copy);

		Fixed	&operator=(Fixed const &copy);

		bool	&operator>(Fixed fixed) const;
		bool	&operator<(Fixed fixed) const;
		bool	&operator>=(Fixed fixed) const;
		bool	&operator<=(Fixed fixed) const;
		bool	&operator==(Fixed fixed) const;
		bool	&operator!=(Fixed fixed) const;

		int		&operator+(int) const;
		int		&operator-(int) const;
		int		&operator*(int) const;
		int		&operator/(int) const;

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);

#endif