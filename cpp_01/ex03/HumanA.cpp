#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) {
	_name = name;
}

HumanA::~HumanA() {

}

void	HumanA::attack() {
	std::cout << _name << ACTION << _weapon.getType() << std::endl;
}

