#include "hogesnelheidstrein.h"
#include "normaletrein.h"
#include <string>
#include <iostream>

int main() {
	hogesnelheidstrein*	hsn = new hogesnelheidstrein(100, 2.0f, 3, false);
	normaletrein* nrml = new normaletrein(100, 2.0f);


	std::cout << hsn.berekenprijs(120);
	std::cout << nrml.berekenprijs(120);


	return 0;


}
