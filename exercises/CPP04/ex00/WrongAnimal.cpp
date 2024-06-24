#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal() : _type("Default")
{
	std::cout << "WrongAnimal default constructor called\n" << std::endl;
}

WrongAnimal::WrongAnimal (std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called\n" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
	std::cout << "WrongAnimal copy constructor called\n" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	_type = other._type;
	std::cout << "WrongAnimal copy assignment constructor called\n" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal deconstructor called\n" << std::endl;
}


void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal could make several different sounds\n" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (_type);
}