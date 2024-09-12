#include "Harl.hpp"

int	main( void ) {
	std::string	input;
	Harl		harl;

	std::cout << "\nPrinting everything Harl could say: \n" << std::endl;

	std::cout << "DEBUG\n" <<std::endl;

	std::cout << "INFO\n" <<std::endl;

	std::cout << "WARNING\n" <<std::endl;

	std::cout << "ERROR\n" <<std::endl;


	std::cout << "What do you want Harl to say? (In capital letters)" << std::endl;
	
	for (int i = 0; i < 5; i++) {
		std::cout << "input: ";
		std::cin >> input;

		if (std::cin.eof() == true) {
			std::cerr << "^D" << std::endl;
			return(1);
		}

		harl.complain(input);
		std::cout << std::endl;
	}

	return (0);
}
