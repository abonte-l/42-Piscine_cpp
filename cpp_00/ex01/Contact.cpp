#include "Contact.hpp"

Contact::Contact() : _indexGen(0) {
	
}

Contact::~Contact() {

}

void	Contact::addEntry() {
	if (_indexGen < 8 && _indexGen >= 0 ) {
		std::cout << "Enter contact's firstname : ";
		std::cin >> data[_indexGen]._firstName;
		std::cout << "Enter contact's lastname : ";
		std::cin >> data[_indexGen]._lastName;
		std::cout << "Enter contact's nickname : ";
		std::cin >> data[_indexGen]._nickName;
		std::cout << "Enter contact's phone number : ";
		std::cin >> data[_indexGen]._phoneNumber;
		std::cout << "Enter contact's darkest secret : ";
		std::cin >> data[_indexGen]._darkestSecret;
		++_indexGen;
	}
	std::cout << data[_indexGen]._firstName <<std::endl;
	std::cout << "PROUT" <<std::endl;
}

void	Contact::deleteEntry(std::string) {

}

void	Contact::displayEntry(std::string) {

}

