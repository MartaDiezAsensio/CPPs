
#ifndef WEAPON_HPP
# define WEAPON_HPP


#include <iostream>
#include <string>
#include <algorithm>

class Weapon {
	private:
		std::string	_type;
	public:
		Weapon( std::string type );
		~Weapon( void );
		
		std::string	getType();
		void	setType(std::string type);
};

#endif
