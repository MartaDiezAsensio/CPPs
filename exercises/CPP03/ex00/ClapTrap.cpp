#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap " << this->_name << " created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called." << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "Assignment operator called" << std::endl;
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	return (*this);
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
