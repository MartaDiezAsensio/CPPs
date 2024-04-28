#include "ClapTRap.hpp"

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

void	ClapTrap::attack(const std::string &target) {

}

void	ClapTrap::takeDamage(unsigned int amount) {}
void	ClapTrap::beRepaired(unsigned int amount) {}
