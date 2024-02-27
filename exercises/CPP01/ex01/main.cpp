#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main(void)
{
	int		N = 3;
	int		i = 0;
	char	name[] = "Zom";


	Zombie	*horde = zombieHorde(N, name);
	while (i < N)
	{
		horde[i].announce();
		i++;
	}

	return (1);
}
