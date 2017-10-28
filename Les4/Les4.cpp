// Les4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "Bibliotheek.h"


void geefBibliotheekDoor(Bibliotheek* bibliotheek) {
	std::cout << "Bibliotheek heeft dit boek: " << std::endl;
	bibliotheek->toon();

	bibliotheek->voegToe("Henry Snotter en de Magische Snorkel");
	bibliotheek->toon();
	int i;
	std::cout << "Geef input om dit te sluiten" << std::endl;
	std::cin >> i;
}

int main() {
	Bibliotheek* bibliotheek = new Bibliotheek();
	bibliotheek->toon();

	bibliotheek->voegToe("Turkse Fruitsalade");
	bibliotheek->toon();

	geefBibliotheekDoor(bibliotheek);
	bibliotheek->toon();

	return 0;
}

