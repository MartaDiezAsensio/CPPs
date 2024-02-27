#include "Zombie.hpp"

Zombie::Zombie( std::string const &name ) : _name(name) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie \"" << this->_name;
	std::cout << "\" has been destroyed." << std::endl;
	return ;
}


void	Zombie::announce( void ) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}