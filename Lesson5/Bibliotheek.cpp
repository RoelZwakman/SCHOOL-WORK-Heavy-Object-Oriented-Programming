#include <iostream>
#include "Bibliotheek.h"


Bibliotheek::Bibliotheek()
{
	filiaalNaam = "Standaardnaam";
}

Bibliotheek::Bibliotheek(std::string naam) {
	filiaalNaam = naam;

}

Bibliotheek::~Bibliotheek() {
	std::cout << "Bibliotheek: destructor" << std::endl;
	delete boek;
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
    std::cout << "Bibliotheek: copy-ctor" << std::endl;
    boek = new Boek();
    boek->_type = bibliotheek.boek->_type;
	filiaalNaam = bibliotheek.filiaalNaam;
}

Bibliotheek& Bibliotheek::operator=(const Bibliotheek& bibliotheek) {
	if(this != &bibliotheek)
	{
		delete boek;
		boek = new Boek;
		boek->_type = bibliotheek.boek->_type;
	}
	return *this;
}

void Bibliotheek::toon() {
	std::cout << "Bibliotheek " << this->filiaalNaam << " heeft dit boek: " << boek->_type << std::endl;
}

void Bibliotheek::voegToe(std::string type) {

	delete boek;
	boek = new Boek(type);

}