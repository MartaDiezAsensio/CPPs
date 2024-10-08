#include "Contact.hpp"
#include "Phonebook.hpp"

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
		if (darkest_secret.empty())
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

int		PhoneBook::customAtoi(const std::string &str)
{
	int		i = 0;
	bool	isNegative = false;
    int		n = str.size();
	int		result = 0;

    while (i < n && isspace(str[i])) {
        i++;
    }
    if (i < n && (str[i] == '-' || str[i] == '+')) {
        isNegative = (str[i] == '-');
        i++;
    }
    while (i < n && isdigit(str[i])) {
        int digit = str[i] - '0';
        if (result > (INT_MAX - digit) / 10) {
            return isNegative ? INT_MIN : INT_MAX;
        }
        result = result * 10 + digit;
        i++;
    }

    if (isNegative) {
		return (-result);
	} else {
		return (result);
	}
}

void	PhoneBook::search_contact()
{
	int			index_search = 0;
	std::string	str;

	display_contact();
	std::cout << "Enter the contact\'s index: " << std::endl;
	std::cout << "> ";
	std::cin >> str;

	index_search = PhoneBook::customAtoi(str.c_str());
	if (std::cin.fail() || (index_search < 0) || (index_search > 7) || str.length() > 1)
		std::cout << "Invalid input" << std::endl;
	else
	{
		std::cout << "First name: " << _contacts[index_search].get_first_name() << std::endl;
		std::cout << "Last name: " << _contacts[index_search].get_last_name() << std::endl;
		std::cout << "Nickename: " << _contacts[index_search].get_nick() << std::endl;
		std::cout << "Phone number: " << _contacts[index_search].get_phone_num() << std::endl;
		std::cout << "Darkest secret: " << _contacts[index_search].get_darkest_secret() << std::endl;
	}
	std::cin.clear();
	std::cin.ignore(1000, '\n');
}

void	PhoneBook::display_contact()
{
	std::string		str;

	std::cout	<< "|--------------Contact Display--------------|\n"
				<< "|-------------------------------------------|\n"
				<< "|     Index|First Name| Last Name|  Nickname|\n"
				<< "|-------------------------------------------|\n";

	for (int i = 0; i < 8; i++)
	{
		std::cout << '|' << std::setw(10) << i;

		str = _contacts[i].get_first_name();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << '|' << std::setw(10) << str;

		str = _contacts[i].get_last_name();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << '|' << std::setw(10) << std::right << str;

		str = _contacts[i].get_nick();
		if (str.length() > 10)
			str = str.substr(0, 9) + ".";
		std::cout << '|' << std::setw(10) << str;
		std::cout << '|' << std::endl;
	}
}

void	PhoneBook::help_menu()
{
	std::cout << "|-----------------------Phonebook-----------------------|" << std::endl;
	std::cout << "|                        1-ADD                          |" << std::endl;
	std::cout << "|                        2-SEARCH                       |" << std::endl;
	std::cout << "|                        3-EXIT                         |" << std::endl;
	std::cout << "|-------------------------------------------------------|" << std::endl;
}

int	main()
{
	PhoneBook	*myPhoneBook = new PhoneBook();

	std::string	str;

	myPhoneBook->help_menu();
	std::cout << "> ";
	while (getline(std::cin, str))
	{
		if (str.compare("ADD") == 0)
			myPhoneBook->add_contact();
		else if (str.compare("SEARCH") == 0)
			myPhoneBook->search_contact();
		else if (str.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Command not found, please read the menu above" << std::endl;
		std::cout << "> ";
	}
	delete	myPhoneBook;
	return (0);
}
