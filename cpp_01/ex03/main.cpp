#include "HumanA.hpp"
#include "HumanB.hpp"


int	main() {
	{
		Weapon club = Weapon(W_TYPE_1);
		HumanA bob(NAME_A, club);
		bob.attack();
		club.setType(W_TYPE_2);
		bob.attack();
	}
	{
		Weapon club = Weapon(W_TYPE_1);
		HumanB jim(NAME_B);
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType(W_TYPE_2);
		jim.attack();
	}
}


