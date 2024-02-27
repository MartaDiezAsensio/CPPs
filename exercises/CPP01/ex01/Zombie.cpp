#include "Zombie.hpp"

Zombie::Zombie( std::string name ) {
	this->_name = name;
	std::cout << "Zombie " << this->_name << " created\n" << std::endl;
}


Zombie::Zombie( void ) {
	this->_name = "(null)";
	std::cout << "Zombie " << this->_name << " created\n" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << this->_name << " destroyed\n" << std::endl;
}


void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
}
