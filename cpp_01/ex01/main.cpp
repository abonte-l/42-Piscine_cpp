#include "Zombie.hpp"

int	main() {
	
	srand (time(NULL));
	int n = rand() % 10 + 1;
	std::cout << NB_ZOMBIES << n << std::endl;
	std::cout << NAME_ANN << std::endl;
	Zombie *myZombieHorde = zombieHorde(n, NAME);
	delete[] myZombieHorde;
	return (0);
}