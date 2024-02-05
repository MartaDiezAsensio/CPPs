
#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
	this->_type = type;
	std::cout << "Created" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Deleted" << std::endl;
}

std::string	Weapon::getType() {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
}
