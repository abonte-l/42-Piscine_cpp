#include "Contact.hpp"

Contact::Contact() : _indexGen(0) {
	
}

Contact::~Contact() {

}

void	Contact::addEntry() {
	if (_indexGen < 8 && _indexGen >= 0 ) {
		std::cout << "Enter contact's firstname : ";
		std::cin >> data[_indexGen]._firstName;
	}
	std::cout << data[_indexGen]._firstName <<std::endl;
	std::cout << "PROUT" <<std::endl;
}

void	Contact::deleteEntry(std::string) {

}

void	Contact::displayEntry(std::string) {

}

