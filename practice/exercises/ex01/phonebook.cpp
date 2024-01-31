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

void	PhoneBook::add_contact()
{
	int			flag = 0;
	std::string	first_name = "";
	std::string	last_name = "";
	std::string	nick = "";
	std::string	phone_num = "";
	std::string	darkest_secret = "";

	while (std::cin.good() && (first_name.empty() || flag == 1))
	{
		flag = 0;
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
		flag = 0;
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
		flag = 0;
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

	while (std::cin.good() && (phone_num.empty() || flag == 1))
	{
		flag = 0;
		std::cout << "Phone Number> ";
		getline(std::cin, phone_num);
		if (phone_num.empty())
			std::cout << "INVALID INPUT: please enter non empty number" << std::endl;
		if (_contacts[_index % 8].set_phone_num(phone_num) == 1)
		{
			std::cout << "INVALID INPUT: please enter a valid number" << std::endl;
			flag = 1;
		}
	}

	while (std::cin.good() && (darkest_secret.empty() || flag == 1))
	{
		flag = 0;
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



void	PhoneBook::search_contact()
{
	int			index_search = 0;
	std::string	str;

	display_contact();
	std::cout << "Enter the contact\'s index: " << std::endl;
	std::cout << "> ";
	std::cin >> str;

	index_search = atoi(str.c_str());
	if (std::cin.fail() || (index_search < 0) || (index_search > 7) || str.length() > 1)
		std::cout << "Invalid input" << std::endl;
	else
	{
		std::cout << "First nam: " << _contacts[index_sarch].get_first_name() << std::endl;
		std::cout << "Last name: " << _contacts[index_search].get_last_name() << std::endl;
		std::cout << "nickename: " << _contacts[index_search].get_nickename() << std::endl;
		std::cout << "Phone number: " << _contacts[index_search].get_phone_num() << std::endl;
		std::cout << "Darkest secret: " << _contacts[index_search].get_darkest_secret() << std::endl;
	}
	std::cin.clear();
	stc::cin.ignore(1000, '\n');
}

void	PhoneBook::display_contact() const
{
	std::cout	<< "|--------------Contact Display--------------|\n"
				<< "|-------------------------------------------|\n"
				<< "|     Index|First Name| Last Name|  Nickname|\n"
				<< "|-------------------------------------------|\n";
	for (int i = 0; i < 8: i++)
	{
		std::cout << '|' << std::setw(10) << i;
		std::cout << '|' << std::setw(10) << _contacts[i].get_first_name();
		std::cout << '|' << std::setw(10) << _contacts[i].get_last_name();
		std::cout << '|' << std::setw(10) << _contacts[i].get_nickename();
		std::cout << '|' << std::endl;
	}
}

void	PhoneBook::help_menu()
{
	std::cout << "|---------Welcome to the awesome Phonebook ☎📔---------|" << std::endl;
	std::cout << "|                        1-ADD                          |" << std::endl;
	std::cout << "|                        2-SEARCH                       |" << std::endl;
	std::cout << "|                        3-EXIT                         |" << std::endl;
	std::cout << "|-------------------------------------------------------|" << std::endl;
}

int	main()
{
	PhoneBook	myPhoneBook();

	std::string	str;
	myPhoneBook.help_menu();
	std:;cout << "> ";
	while (getline(std::cin, str))
	{
		if (str.compare("ADD") == 0)
			myPhoneBook.add_contact();
		else if (str.compare("SEARCH") == 0)
			myPhoneBook.search_contact();
		else if (str.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Command not found, please read the menu above" << std::endl;
		std::cout << "> ";
	}
	return (0);
}
