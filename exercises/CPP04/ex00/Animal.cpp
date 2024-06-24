#include "Animal.hpp"

Animal::Animal() : _type("Default")
{
	std::cout << "Animal default contructor calledc" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal contructor called\n" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Animal copy contructor called\n" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	_type = other._type;
	std::cout << "Animal copy assignment contructor called\n" << std::endl;

}

Animal::~Animal()
{
	std::cout << "Animal cdestructor called\n" << std::endl;
}

void	Animal::makesound() const
{
	std::cout << "Animal could make many different sounds.\n" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (_type);
}
