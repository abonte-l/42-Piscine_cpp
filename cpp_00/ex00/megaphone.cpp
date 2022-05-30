#include <iostream>

int	main(int ac, char **av)	{
	if (ac != 1) {
		for (int i=1; i<ac; ++i) {
			std::string data=av[i];
			for (int j=0; data[j]!=0; ++j) {
				data[j] = toupper(data[j]);
			}
			std::cout << data;
		}
		std::cout << std::endl;
	}
	else 
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}
