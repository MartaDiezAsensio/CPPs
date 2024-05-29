#include "ClapTrap.hpp"

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
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}
void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	_energyPoints -= 1;
	_hitPoints += amount;
}
