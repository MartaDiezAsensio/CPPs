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

void Harl::complain(std::string level) {
  void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                  &Harl::error};
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  int i;
  for (i = 0; i < 4; i++) {
    if (level == levels[i]) {
      (this->*functions[i])();
      break;
    }
  }
  if (i == 4) std::cout << "No matching level!" << std::endl;
}
