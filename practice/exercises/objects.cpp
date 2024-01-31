#include <iostream>
#include <string.h>

class Dog {
	public:
	std::string	name;
	std::string	breed;
	int			policy_number;
	int				age;


	Dog(std::string name, std::string breed, int policy_number, int age);
};

Dog::Dog(std::string _name, std::string _breed, int _policy_number, int _age)
{
	name = _name;
	breed = _breed;
	policy_number = _policy_number;
	age = _age;
}

int	main()
{
	Dog		d_Jorge("Paco", "chouchou", 1568436, 3);

	std::cout << "Name: "<< d_Jorge.name << "\n";
	std::cout << "Breed: "<< d_Jorge.breed << "\n";
	std::cout << "Age: "<< d_Jorge.age << "\n";
	std::cout << "Policy Number: "<< d_Jorge.policy_number << "\n";
}