
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";

	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;

	std::cout << "# DiamondTrap # - " << this->_name << " constructed." << std::endl;
}

DiamondTrap::~DiamondTrap()
{

}


void	DiamondTrap::whoAmI(void)
{

}
