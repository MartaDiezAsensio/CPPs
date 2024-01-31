#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define	MAX_CONTACT 8

#include <iostream>
#include "contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[MAX_CONTACT];
		int		_index;

	public:
		PhoneBook();
		~PhoneBook();

		void	add_contact();
		void	search_contact();
		void	display_contact();
		void	help_menu();
};

#endif