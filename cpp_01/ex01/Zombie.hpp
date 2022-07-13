#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <cstdlib>

#define ZOMBIE_IC "🧟 "
#define BRAIN_IC " 🧠"
#define ZOMBIE_SNORT " BraiiiiiiinnnzzzZ..."
#define D_ZOMBIE_SNORT " Dying zombie sounds "

#define NAME_ANN "\033[0;0mThe horde is named : \033[1;32mThe Snorting Pack\033[0;0m"
#define NAME "\033[1;32mThe Snorting Pack\033[0;0m"
#define NB_ZOMBIES "Generate a zombie horde of \033[1;31m"

class Zombie {
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void 	announce(void);
		void	setName(std::string);
		
};

Zombie	*zombieHorde( int, std::string);

#endif


