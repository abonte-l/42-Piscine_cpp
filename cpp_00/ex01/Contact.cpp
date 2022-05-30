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
}

void	Contact::displayEntry(std::string) {

}
