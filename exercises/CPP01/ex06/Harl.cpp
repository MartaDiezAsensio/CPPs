#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << "created" << std::endl;
}

Harl::~Harl( void ) {
	std::cout << "deleted" << std::endl;
}


void	Harl::debug( void ) {
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void ) {
std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void ) {
std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void ) {
std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std:: string level) {
	void	(Harl::*functionPTRS[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string	complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;

	for (i = 0; i < 4; i++) {
		if (complains[i] == level)
			break ;
	}
	switch (i) {
		case (0):
			(this->*functionPTRS[0])();
		case (1):
			(this->*functionPTRS[1])();
		case (2):
			(this->*functionPTRS[2])();
		case (3):
			(this->*functionPTRS[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
