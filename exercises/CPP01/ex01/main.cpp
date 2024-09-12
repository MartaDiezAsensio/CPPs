#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Please provide this input format: <Number of Zombies> <Name of the Zombies>\n" << std::endl;
		
		return (1);
	}

	int				N = atoi(argv[1]);
	int				i = 0;
	std::string		name = argv[2];

	if (N > 1000)
	{
		std::cout << "No more than 1000 Zombies can be created at a time.\n" << std::endl;
		return (1);
	}
	
	Zombie	*zombies = zombieHorde(N, name);

	std::cout << "---------------------------------------------------------------\n" << std::endl;

	while (i < N && N < 1000)
	{
		zombies[i].announce();
		i++;
	}

	std::cout << "\n" << std::endl;

	delete[] zombies;

	return (0);
}
