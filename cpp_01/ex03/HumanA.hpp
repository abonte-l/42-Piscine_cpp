#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

#define NAME_A "\033[1;31mBob\033[0;0m"

#define W_TYPE_1 "their crude spiked club"
#define W_TYPE_2 "some other type of club"

#define ACTION " attacks with "

class HumanA {
	private:
		std::string _name;
		Weapon &_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void	attack();
};

#endif