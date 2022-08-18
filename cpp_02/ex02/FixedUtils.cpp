#include "Fixed.hpp"

void displayTitle(std::string str){
	std::cout << std::endl;
	std::cout << std::setfill('-');
	for (int i = 0; i < 1; ++i)
		std::cout << "\033[1;36m+" << std::setw(50) << "";
	std::cout << "+" << std::endl << std::setfill(' ');
	std::cout << "|" << std::setw(30) << str;
	std::cout << std::setw(21) << "|" << std::endl;
	std::cout << std::setfill('-');
	for (int i = 0; i < 1; ++i)
		std::cout << "+" << std::setw(50) << "";
	std::cout << "+\033[0;1m" << std::endl << std::setfill(' ');
	std::cout << std::endl;
}

void displayTestTitle(std::string str){

	int before, after;
	std::string color;

	if (str == MIN)
		before = 14, after = 7, color = "\033[1;32m*" ;
	else if (str == INCR_DECR)
		before = 17, after = 4, color = "\033[1;33m*" ;
	else if (str == ARITH)
		before = 18, after = 3, color = "\033[1;34m*" ;
	else if (str == LOGIC)
		before = 16, after = 5, color = "\033[1;31m*" ;

	std::cout << std::endl;
	std::cout << std::setfill('*');
	for (int i = 0; i < 1; ++i)
		std::cout << color << std::setw(20) << "";
	std::cout << "*" << std::endl << std::setfill(' ');
	std::cout << "*" << std::setw(before) << str;
	std::cout << std::setw(after) << "*" << std::endl;
	std::cout << std::setfill('*');
	for (int i = 0; i < 1; ++i)
		std::cout << "*" << std::setw(20) << "";
	std::cout << "*\033[0;1m" << std::endl << std::setfill(' ');
	std::cout << std::endl;
}