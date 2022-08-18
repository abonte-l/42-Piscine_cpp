#include "Fixed.hpp"


int main() {
	
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed a1, a2, b1, c, d;

	displayTitle(MAIN_S);
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	displayTitle(MAIN_A);

	displayTestTitle(MIN);
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << INFO_TM << std::endl;

	a1 = 5;
	a2 = 5;
	b1 = 2;

	displayTestTitle(INCR_DECR);
	std::cout << a1 << std::endl;
	std::cout << ++a1 << std::endl;
	std::cout << --a1 << std::endl;
	std::cout << ++a1 << std::endl;
	std::cout << a1 << std::endl;
	std::cout << a1++ << std::endl;
	std::cout << a1-- << std::endl;
	std::cout << a1++ << std::endl;
	std::cout << a1 << std::endl;

	displayTestTitle(ARITH);
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

	c = 5, d = 6;

	displayTestTitle(LOGIC);

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

	
	return 0;

}
