#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

#define GEN_Z1 "\033[1;37mGenerate zombie number 01\033[0;0m"
#define GEN_Z2 "\033[1;37mGenerate zombie number 02\033[0;0m"
#define GEN_Z3 "\033[1;37mGenerate zombie number 03\033[0;0m"

#define Z1_NAME "\033[1;32mFleshy Fleshington\033[0;0m"
#define Z2_NAME "\033[1;32mFester McBrains\033[0;0m"
#define Z3_NAME "\033[1;32mBrainy Undead\033[0;0m"

class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void 	announce(void);
		
};

Zombie*	newZombie(std::string);
void	randomChump(std::string);

#endif