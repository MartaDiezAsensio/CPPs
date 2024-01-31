#include "contact.hpp"

Contact::Contact()
{
}
Contact::~Contact()
{
}

std::string	Contact::get_first_name() const
{
	return (this->_first_name);
}
std::string	Contact::get_last_name() const
{
	return (this->_last_name);
}
std::string	Contact::get_nick() const
{
	return (this->_nick);
}
std::string	Contact::get_phone_number() const
{
	return (this->_phone_num);
}
std::string	Contact::get_darckest_secret() const
{
	return (this->_darkest_secret);
}

int	Contact::set_first_name(std::string first_name)
{
	if (first_name == "")
		return (1);
	for(size_t i = 0; i < first_name.size(); i++)
	{
		if (!isalpha(first_name[i]))
		{
			if (isspace(first_name[i]))
				continue;
			else
				return (1);
		}
	}
	this->_first_name = first_name;
	return (0);
}
int	Contact::set_last_name(std::string last_name)
{
	if (last_name == "")
		return (1);
	for(size_t i = 0; i < last_name.size(); i++)
	{
		if (!isalpha(last_name[i]))
		{
			if (isspace(last_name[i]))
				continue;
			else
				return (1);
		}
	}
	_last_name = last_name;
	return (0);
}
int	Contact::set_nick(std::string nick)
{
	if (nick == "")
		return (1);
	for(size_t i = 0; i < nick.size(); i++)
	{
		if (!isalpha(nick[i]))
		{
			if (isspace(nick[i]))
				continue;
			else
				return (1);
		}
	}
	_nick = nick;
	return (0);
}
int	Contact::set_phone_number(std::string phone_num)
{
	if (phone_num == "")
		return (1);
	for(size_t i = 0; i < phone_num.size(); i++)
	{
		if (!isdigit(phone_num[i]))
			return (1);
	}
	_phone_num = phone_num;
	return (0);
}
int	Contact::set_darkest_secret(std::string darkest_secret)
{
	if (darkest_secret == "")
		return (1);
	_darkest_secret = darkest_secret;
	return (0);
}
