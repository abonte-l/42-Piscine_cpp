#include "ReplaceIt.hpp"

//remplacement ok
//reste gestion des fichiers

int		main(int ac, char **av) {

	(void) ac;
	std::string str = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::cout << str << " " << s1 << " " << s2 <<std::endl;
	std::string sedStr = replaceIt(str, s1, s2);
	std::cout << sedStr << " " << s1 << " " << s2 <<std::endl;
}