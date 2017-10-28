#pragma once
#include "Boek.h"

class Bibliotheek {
public:
	Bibliotheek();

	void toon();

	void voegToe(std::string type);
private:
	Boek* boek = new Boek();
};