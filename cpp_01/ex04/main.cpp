#include "ReplaceIt.hpp"

int		main(int ac, char **av) {

	if ( ac != 4) {
		std::cerr << "Error: Wrong Arugments!" << std::endl;
		return (-1);
	}
	else {
		std::string fileName = av[1];
		std::string fileNameRep = fileName + ".replace";
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::ifstream ifile(fileName);
		if (! ifile.is_open()) {
			std::cout << "Ouverture en lecture du fichier impossible !\n";
			return (-1);
		}
		else 
			std::cout << "Ouverture en lecture du fichier réussie !\n";
		std::string str;
		getline(ifile, str);
		std::string sedStr = replaceIt(str, s1, s2);
		std::ofstream ofile (fileNameRep);
		if (! ofile.is_open()) {
			std::cout << "Ouverture en écriture du fichier impossible !\n";
			return -1;
		}
		ofile << sedStr;
		if (ofile.fail()) {
			std::cout << "Erreur lors de l'écriture dans le fichier !" << std::endl;
			ofile.close();
			return (-2);
		}
		ofile.close();
		ifile.close();
		return 0;
	}
}
