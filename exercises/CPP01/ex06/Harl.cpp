#include "Harl.hpp"

Harl::Harl( void ) {
	std::cout << "Harl Created\n" << std::endl;
  std::cout << "------------------------------------\n" << std::endl;
}

Harl::~Harl( void ) {
  std::cout << "------------------------------------\n" << std::endl;
	std::cout << "Harl Deleted\n" << std::endl;
}


void	Harl::debug( void ) {
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void	Harl::info(void ) {
std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" << std::endl;
}

void	Harl::warning( void ) {
std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl;
}

void	Harl::error( void ) {
std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void  Harl::complain(std::string level)
{
  std::string complainLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int         filter_level = -1;

  for (int i = 0; i < 4; i++)
  {
    if (level == complainLevels[i])
    {
      filter_level = i;
      break;
    }
  }

  switch (filter_level)
  {
    case 0:
      this->debug();
      /* FALLTHRU */
    case 1:
      this->info();
      /* FALLTHRU */
    case 2:
      this->warning();
      /* FALLTHRU */
    case 3:
      this->error();
       break;
    default:
      std::cout << "Probably not something important\n" << std::endl;
      break;
  }

  return;
}
