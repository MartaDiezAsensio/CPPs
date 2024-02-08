
#include "Harl.hpp"

int	main( void ) {
	std::string	input;
	Harl		harl;

	std::cout << "Printing all harl could say." << std::endl;

	harl.complain("DEBUG");

	std::cout << std::endl;

	harl.complain("INFO");

	std::cout << std::endl;

	harl.complain("WARNING");

	std::cout << std::endl;

	harl.complain("ERROR");

	std::cout << std::endl;

	std::cout << "What do you want Harl to say? (In capital letters)" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << "input: ";
		std::cin >> input;
		if (std::cin.eof() == true) {
			std::cerr << "^D" << std::endl;
			exit(EXIT_FAILURE);
		}
		harl.complain(input);
		std::cout << std::endl;
	}

	return (EXIT_SUCCESS);
}
