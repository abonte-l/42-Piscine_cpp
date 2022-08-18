#include "Fixed.hpp"

void incrDecrTests(Fixed a1){
	std::cout << a1 << std::endl;
	std::cout << ++a1 << std::endl;
	std::cout << --a1 << std::endl;
	std::cout << ++a1 << std::endl;
	std::cout << a1 << std::endl;
	std::cout << a1++ << std::endl;
	std::cout << a1-- << std::endl;
	std::cout << a1++ << std::endl;
	std::cout << a1 << std::endl;
}

void arithmeticTests(Fixed a2, Fixed b1, Fixed c){

	std::cout << "a2 = " << a2 << std::endl;
	std::cout << "b1 = " << b1 << std::endl;
	std::cout << std::endl;

	std::cout << ADD << std::endl;
	c = a2 + b1;
	std::cout << c << std::endl;

	std::cout << SUB << std::endl;
	c = a2 - b1;
	std::cout << c << std::endl;

	std::cout << MUL << std::endl;
	c = a2 * b1;
	std::cout << c << std::endl;

	std::cout << DIV << std::endl;
	c = a2 / b1;
	std::cout << c << std::endl;
}

void logicalTests(Fixed a2, Fixed b1, Fixed c, Fixed d){

	std::cout << "a2 = " << a2 << std::endl;
	std::cout << "b1 = " << b1 << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << std::endl;

	std::cout << TEST_SUP << std::endl;
	if (a2 < b1)
		std::cout << "\'a2\' est inferieur a \'b1\' " << std::endl;
	else if (a2 > b1)
		std::cout << "\'a2\' est superieur a \'b1\' " << std::endl;
	std::cout << std::endl;
	std::cout << TEST_INF << std::endl;
	if (b1 < a2)
		std::cout << "\'b1\' est inferieur a \'a2\' " << std::endl;
	else if (b1 > a2)
		std::cout << "\'b1\' est superieur a \'a2\' " << std::endl;
	std::cout << std::endl;
	std::cout << TEST_INF_EQU << std::endl;
	if (c <= a2)
		std::cout << "\'c\' est inferieur ou egal a \'a2\' " << std::endl;
	else if (b1 >= a2)
		std::cout << "\'b1\' est superieur ou egal a \'a2\' " << std::endl;
	std::cout << std::endl;
	std::cout << TEST_SUP_EQU << std::endl;
	if ( d <= a2)
		std::cout << "\'d\' est inferieur ou egal a \'a2\' " << std::endl;
	else if (a2 >= c)
		std::cout << "\'a2\' est superieur ou egal a \'c\' " << std::endl;
	std::cout << std::endl;
	std::cout << TEST_STRICT_EQU << std::endl;
	if ( d <= a2)
		std::cout << "\'d\' est inferieur ou egal a \'a2\' " << std::endl;
	else if (a2 == c)
		std::cout << "\'a2\' est strictement egal a \'c\' " << std::endl;
	std::cout << std::endl;
	std::cout << TEST_NOT_EQU << std::endl;
	if ( d != a2)
		std::cout << "\'d\' n'est pas egal a \'a2\' " << std::endl;
	else if (a2 >= d)
		std::cout << "\'a2\' est superieur ou egal a \'c\' " << std::endl;
	std::cout << std::endl;
}