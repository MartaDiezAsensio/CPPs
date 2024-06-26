#ifndef WRONGNAIMAL_HPP
#define WRONGNAIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string	_type;
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &other);
		virtual ~WrongAnimal();

		void	makeSound() const;
		std::string	getType() const;
};

#endif
