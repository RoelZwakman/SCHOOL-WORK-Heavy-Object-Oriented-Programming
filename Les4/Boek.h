#pragma once

#include <string>

class Boek {
public:
	Boek();
	Boek(std::string type);

	std::string _type = "onbekend";
};
