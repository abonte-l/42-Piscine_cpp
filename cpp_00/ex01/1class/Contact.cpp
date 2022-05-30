#include "Contact.hpp"

Contact::Contact() : _indexGen(1) {
	
}

Contact::~Contact() {

}

void	Contact::addEntry() {
	
	if (_indexGen <= 8 && _indexGen >= 0) {
		_data[_indexGen]._index += _indexGen;
		std::cout << "Enter contact's firstname : ";
		std::cin >> _data[_indexGen]._firstName;
		std::cout << "Enter contact's lastname : ";
		std::cin >> _data[_indexGen]._lastName;
		std::cout << "Enter contact's nickname : ";
		std::cin >> _data[_indexGen]._nickName;
		std::cout << "Enter contact's phone number : ";
		std::cin >> _data[_indexGen]._phoneNumber;
		std::cout << "Enter contact's darkest secret : ";
		std::cin >> _data[_indexGen]._darkestSecret;
		++_indexGen;
	}
	else if (_indexGen > 8 ) {
		int index2Modify = _indexGen % 8;
		std::cout << "Enter contact's firstname : ";
		std::cin >> _data[index2Modify]._firstName;
		std::cout << "Enter contact's lastname : ";
		std::cin >> _data[index2Modify]._lastName;
		std::cout << "Enter contact's nickname : ";
		std::cin >> _data[index2Modify]._nickName;
		std::cout << "Enter contact's phone number : ";
		std::cin >> _data[index2Modify]._phoneNumber;
		std::cout << "Enter contact's darkest secret : ";
		std::cin >> _data[index2Modify]._darkestSecret;
		++_indexGen;
	}


	// if (_indexGen > 8 ) {
	// 	int index2Modify = _indexGen % 8;
	// 	std::cout << "Enter contact's firstname : ";
	// 	std::getline(std::cin, _data[index2Modify]._firstName);
	// 	std::cout << "Enter contact's lastname : ";
	// 	std::getline(std::cin, _data[index2Modify]._lastName);
	// 	std::cout << "Enter contact's nickname : ";
	// 	std::getline(std::cin, _data[index2Modify]._nickName);
	// 	std::cout << "Enter contact's phone number : ";
	// 	std::getline(std::cin, _data[index2Modify]._phoneNumber);
	// 	std::cout << "Enter contact's darkest secret : ";
	// 	std::getline(std::cin, _data[index2Modify]._darkestSecret);
	// 	std::cout  << std::endl;
	// 	++_indexGen;
	// }
	
	// else if (_indexGen <= 8 && _indexGen >= 0) {	
		// ++_indexCount;
		// _data[_indexGen - 1]._index = _indexGen;
		// std::cout << "Enter contact's firstname : ";
		// std::getline(std::cin, _data[_indexGen]._firstName);
		// std::cout << "Enter contact's lastname : ";
		// std::getline(std::cin, _data[_indexGen]._lastName);
		// std::cout << "Enter contact's nickname : ";
		// std::getline(std::cin, _data[_indexGen]._nickName);
		// std::cout << "Enter contact's phone number : ";
		// std::getline(std::cin, _data[_indexGen]._phoneNumber);
		// std::cout << "Enter contact's darkest secret : ";
		// std::getline(std::cin, _data[_indexGen]._darkestSecret);
		// std::cout  << std::endl;
		// ++_indexGen;
		// std::cout << "indexGen = " << _indexGen << std::endl;
		// std::cout << "indexCount = " << _indexCount << std::endl;
	// }
}

void Contact::displayFirstLine() {
	std::cout << std::setfill('-');
	for (int i = 0; i < 4; ++i)
		std::cout << "+" << std::setw(10) << "";
	std::cout << "+" << std::endl << std::setfill(' ');
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRSTNAME";
	std::cout << "|" << std::setw(10) << "LASTNAME";
	std::cout << "|" << std::setw(10) << "NICKNAME";
	std::cout << "|" << std::endl;
	std::cout << std::setfill('-');
	for (int i = 0; i < 4; ++i)
		std::cout << "+" << std::setw(10) << "";
	std::cout << "+" << std::endl << std::setfill(' ');
}

std::string Contact::stringCutter(std::string str) {
	if (str.length() <= 10)
		return(str);
	str = str.substr(0, 8) + ".";
	return(str);
}

void Contact::displayAll() {
	for (int i = 1; i <= 8; ++i) {
		std::cout << "|" << std::setw(10) << _data[i]._index;
		std::cout << "|" << std::setw(10) << stringCutter(_data[i]._firstName);
		std::cout << "|" << std::setw(10) << stringCutter(_data[i]._lastName);
		std::cout << "|" << std::setw(10) << stringCutter(_data[i]._nickName);
		std::cout << "|" << std::endl;
	}

}

void	Contact::displayEntry() {
	
}
