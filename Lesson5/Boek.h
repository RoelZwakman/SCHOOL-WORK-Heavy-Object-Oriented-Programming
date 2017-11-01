#pragma once

#include <string>

class Boek {
public:
	Boek();
	Boek(std::string type);
	virtual ~Boek();

	std::string _type = "onbekend";
};