#include "openbaarVervoersmiddel.h"

class normaletrein : openbaarVervoersmiddel
{
	public:
	normaletrein(int _capaciteit, float _kmprijs) {
		capaciteit = _capaciteit;
		prijs = _kmprijs;
	}

	void berekenprijs(int km);
};
