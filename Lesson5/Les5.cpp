#pragma once
#include <iostream>
#include "Bibliotheek.h"


void geefBibliotheekDoor(Bibliotheek* bibliotheek) {

	bibliotheek->toon();

	bibliotheek->voegToe("Turkse Fruitsalade");
	bibliotheek->toon();

	bibliotheek->voegToe("Henry Snotter en de Magische Snorkel");
	bibliotheek->toon();
}

int main() {
	Bibliotheek* bibliotheek = new Bibliotheek("Plaats met veel boeken");
	Bibliotheek* anderebibliotheek = new Bibliotheek("Aaaaaaaaah");



	geefBibliotheekDoor(bibliotheek);
	geefBibliotheekDoor(anderebibliotheek);

	bibliotheek->toon();
	anderebibliotheek->toon();
	
	anderebibliotheek = bibliotheek;
	anderebibliotheek->toon();

	delete bibliotheek;
	delete anderebibliotheek;


	int i;
	std::cout << "Geef input om dit te sluiten" << std::endl;
	std::cin >> i;
	

	return 0;
}
