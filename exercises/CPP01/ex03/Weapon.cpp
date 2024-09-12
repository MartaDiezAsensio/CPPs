#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->_type = type;
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Weapon deleted" << std::endl;
}

std::string	Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
