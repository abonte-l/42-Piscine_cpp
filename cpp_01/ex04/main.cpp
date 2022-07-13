#include "ReplaceIt.hpp"


int		main(int ac, char **av) {

	if ( ac != 4) {
		std::cerr << ERROR_ARG << std::endl;
		return (-3);
	}
	else {
		std::string sedStr, fileName = av[1], fileNameRep = fileName + F_EXT, s1 = av[2], s2 = av[3], strTmp, str;
		std::ifstream ifile(fileName.c_str());
		if (! ifile.is_open()) {
			std::cout << O_NOK << std::endl;
			return (-1);
		}
		else 
			std::cout << O_OK << std::endl;
		while (getline(ifile, strTmp)) {
			if (str.empty() == true)
				str = strTmp;
			else
				str = str + "\n" + strTmp;
			sedStr = replaceIt(str, s1, s2);
		}
		std::ofstream ofile (fileNameRep.c_str());
		if (! ofile.is_open()) {
			std::cout << O_NOK << std::endl;
			return (-1);
		}
		ofile << sedStr;
		if (ofile.fail()) {
			std::cout << W_NOK << std::endl;
			ofile.close();
			return (-2);
		}
		std::cout << W_OK << std::endl;
		ofile.close();
		ifile.close();
		return (0);
	}
}
