#include "Zombie.hpp"

Zombie::Zombie() {

}

Zombie::~Zombie() {
	std::cout << "Dying zombie sounds" << std::endl;
}

void Zombie::announce(void) {

	std::cout << _name << "🧟‍♀️ BraiiiiiiinnnzzzZ... 🧟‍♀️" << std::endl;
}