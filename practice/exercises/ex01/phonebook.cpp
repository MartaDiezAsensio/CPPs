#include "contact.hpp"
#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	std::cout << "Phonebook constructor called." << std::endl;
}
PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook destructor called." << std::endl;
}

void	add_contact()
{
	int			flag = 0;
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nick = "";
	std::string	phone_num = "";
	std::string	darkest_secret = "";

	while (std::cin.good() && (first_name.empty() || flag == 1))
	{
		flag == 0;
		std::cout << "First Name> ";
		getline(std::cin, first_name);
		if (first_name.empty())
			std::cout << "INVALID INPUT: please enter non empty name" << std::endl;
		if (_contacts[_index % 8].set_first_name(first_name) == 1)
		{
			std::cout << "INVALID INPUT: please enter a valid name" << std::endl;
			flag = 1;
		}
	}

	while (std::cin.good() && (last_name.empty() || flag == 1))
	{
		flag == 0;
		std::cout << "Last Name> ";
		getline(std::cin, last_name);
		if (last_name.empty())
			std::cout << "INVALID INPUT: please enter non empty name" << std::endl;
		if (_contacts[_index % 8].set_last_name(last_name) == 1)
		{
			std::cout << "INVALID INPUT: please enter a valid name" << std::endl;
			flag = 1;
		}
	}

	while (std::cin.good() && (nick.empty() || flag == 1))
	{
		flag == 0;
		std::cout << "Nick Name> ";
		getline(std::cin, nick);
		if (nick.empty())
			std::cout << "INVALID INPUT: please enter non empty name" << std::endl;
		if (_contacts[_index % 8].set_nick(nick) == 1)
		{
			std::cout << "INVALID INPUT: please enter a valid name" << std::endl;
			flag = 1;
		}
	}

	while (std::cin.good() && (phone_number.empty() || flag == 1))
	{
		flag == 0;
		std::cout << "Phone Number> ";
		getline(std::cin, phone_number);
		if (phone_number.empty())
			std::cout << "INVALID INPUT: please enter non empty number" << std::endl;
		if (_contacts[_index % 8].set_phone_number(phone_number) == 1)
		{
			std::cout << "INVALID INPUT: please enter a valid number" << std::endl;
			flag = 1;
		}
	}

	while (std::cin.good() && (darkest_secret.empty() || flag == 1))
	{
		flag == 0;
		std::cout << "Darkest Secret> ";
		getline(std::cin, darkest_secret);
		if (darkest.empty())
			std::cout << "INVALID INPUT: please enter non empty string" << std::endl;
		if (_contacts[_index % 8].set_darkest_secret(darkest_secret) == 1)
		{
			std::cout << "INVALID INPUT: please enter a valid string" << std::endl;
			flag = 1;
		}
	}

	this->_index++;
	std::cout << "The contact has been added successfully" << std::endl;
	std::cin.clear();
}



void	search_contact()
{

}

void	display_contact()
{

}

void	help_menu()
{

}
