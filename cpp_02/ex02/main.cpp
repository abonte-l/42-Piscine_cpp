#include "Fixed.hpp"


int main() {
	
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));


	displayTitle(MAIN_S);
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl;

	displayTitle(MAIN_A);

	Fixed a1, a2, b1, c, d;

	displayTestTitle(MIN);
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << INFO_TM << std::endl;

	a1 = 5, a2 = 5, b1 = 2;

	displayTestTitle(INCR_DECR);
	incrDecrTests(a1);

	displayTestTitle(ARITH);
	arithmeticTests(a2, b1, c);

	c = 5, d = 6;

	displayTestTitle(LOGIC);
	logicalTests(a2, b1, c, d);

	return 0;

}
