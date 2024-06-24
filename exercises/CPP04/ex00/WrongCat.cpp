
#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called\n" << std::endl;
}

WrongCat::WrongCat (std::string type) : WrongAnimal(type)
{
	_type = type;
	std::cout << "WrongCat constructor called\n" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;
	std::cout << "WrongCat copy constructor called\n" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	_type = other._type;
	std::cout << "WrongCat copy assignment constructor called\n" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat deconstructor called\n" << std::endl;
}


void WrongCat::makeSound() const
{
	std::cout << "ioooo iooooo ioooo\n" << std::endl;
}
