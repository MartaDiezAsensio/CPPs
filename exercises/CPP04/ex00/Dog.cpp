#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Dog default constructor called\n" << std::endl;
}

Dog::Dog(std::string type) : Animal (type)
{
	_type = type;
	std::cout << "Dog constructor called\n" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;
	std::cout << "Dog copy constructor called\n" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	_type = other._type;
	std::cout << "Dog copy assignment constructor called\n" << std::endl;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n" << std::endl;
}

void Dog::makesound() const
{
	std::cout << "Bup Bup Bup" <<std::endl;
}
