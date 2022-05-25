#include <iostream>
#include <string>

int	main(int argc, char **argv)	{

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}

	else {
		for (int i=1; i<argc; i++) {
			std::string data=argv[i];
			for (int j=0; data[j]!=0; j++) {
				data[j] = toupper(data[j]);
			};
			std::cout << data;
	}
		std::cout << std::endl;
	}
}