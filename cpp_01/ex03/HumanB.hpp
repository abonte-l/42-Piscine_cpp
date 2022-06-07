#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include "Weapon.hpp"



class HumanB {
	
	private:
		std::string _name;

	public:
		HumanB();
		~HumanB();
		Weapon _weapon;
		void	attack();
};

#endif