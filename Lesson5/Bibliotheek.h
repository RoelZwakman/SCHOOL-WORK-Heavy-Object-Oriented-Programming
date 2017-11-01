#pragma once

#include "Boek.h"

class Bibliotheek {
public:
	Bibliotheek();
	Bibliotheek(std::string naam);
	virtual ~Bibliotheek();
	Bibliotheek(const Bibliotheek& bibliotheek);
	Bibliotheek& operator=(const Bibliotheek& bibliotheek);
	std::string filiaalNaam;
	void toon();

	void voegToe(std::string type);
private:
	Boek* boek = new Boek();
	
};