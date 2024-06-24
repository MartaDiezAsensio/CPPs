#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat default constructor called\n" << std::endl;
}

Cat::Cat(std::string type) : Animal (type)
{
	_type = type;
	std::cout << "Cat constructor called\n" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;
	std::cout << "Cat copy constructor called\n" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	_type = other._type;
	std::cout << "Cat copy assignment constructor called\n" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n" << std::endl;
}

void Cat::makesound() const
{
	std::cout << "Miau Miau Miau" <<std::endl;
}
