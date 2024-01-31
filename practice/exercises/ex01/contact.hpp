#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>


class Contact 
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick;
		std::string	_phone_num;
		std::string	_darkest_secret;

	public:
		Contact();
		~Contact();

		std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nick() const;
		std::string	get_phone_num() const;
		std::string	get_darckest_secret() const;

		int	set_first_name(std::string first_name);
		int	set_last_name(std::string last_name);
		int	set_nick(std::string nick);
		int	set_phone_num(std::string phone_num);
		int	set_darkest_secret(std::string darkest_secret);
};

#endif
		