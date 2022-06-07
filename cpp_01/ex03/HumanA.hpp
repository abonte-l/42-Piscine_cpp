#ifndef HUMANA_H
# define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
	
	private:
		std::string _name;

	public:
		HumanA();
		~HumanA();
		
		Weapon weapon;
		void	attack();
};

#endif