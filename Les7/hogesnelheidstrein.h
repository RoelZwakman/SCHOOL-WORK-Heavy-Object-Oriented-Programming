#pragma once

#include "openbaarVervoersmiddel.h"

class hogesnelheidstrein : openbaarVervoersmiddel
{
	public:

		hogesnelheidstrein(int _capaciteit, float _kmprijs, float _toeslag, bool _heeftToeslag) {
			capaciteit = _capaciteit;
			prijs = _kmprijs;
			heeftToeslag = _heeftToeslag;
			extraToeslag = _toeslag;

			void berekenprijs();


	}
};