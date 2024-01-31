#include <iostream>

class PhoneBook {
	public:

	Contact	*phonebook = new Contact[8];

};

class Contact {
	public:
	std::string	name;
	int			number;
};